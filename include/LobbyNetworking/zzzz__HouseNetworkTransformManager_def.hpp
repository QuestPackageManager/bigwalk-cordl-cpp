#pragma once
// IWYU pragma private; include "LobbyNetworking/HouseNetworkTransformManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HouseNetworkTransformManager)
namespace LobbyNetworking {
struct HouseNetworkTransformManager_TransformData;
}
namespace LobbyNetworking {
struct HouseNetworkTransformManager_TransformJobData;
}
namespace LobbyNetworking {
struct HouseNetworkTransformManager_UpdateJob;
}
namespace LobbyNetworking {
class HouseNetworkTransform;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace UnityEngine::Jobs {
class IJobParallelForTransform;
}
namespace UnityEngine::Jobs {
struct TransformAccessArray;
}
namespace UnityEngine::Jobs {
struct TransformAccess;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace LobbyNetworking {
class HouseNetworkTransformManager;
}
namespace LobbyNetworking {
struct HouseNetworkTransformManager_TransformData;
}
namespace LobbyNetworking {
struct HouseNetworkTransformManager_TransformJobData;
}
namespace LobbyNetworking {
struct HouseNetworkTransformManager_UpdateJob;
}
// Write type traits
MARK_REF_T(::LobbyNetworking::HouseNetworkTransformManager*);
MARK_VAL_T(::LobbyNetworking::HouseNetworkTransformManager_TransformData);
MARK_VAL_T(::LobbyNetworking::HouseNetworkTransformManager_TransformJobData);
MARK_VAL_T(::LobbyNetworking::HouseNetworkTransformManager_UpdateJob);
DEFINE_IL2CPP_CLASS(::LobbyNetworking::HouseNetworkTransformManager*, "LobbyNetworking", "HouseNetworkTransformManager");
DEFINE_IL2CPP_CLASS(::LobbyNetworking::HouseNetworkTransformManager_TransformData, "LobbyNetworking", "HouseNetworkTransformManager/TransformData");
DEFINE_IL2CPP_CLASS(::LobbyNetworking::HouseNetworkTransformManager_TransformJobData, "LobbyNetworking", "HouseNetworkTransformManager/TransformJobData");
DEFINE_IL2CPP_CLASS(::LobbyNetworking::HouseNetworkTransformManager_UpdateJob, "LobbyNetworking", "HouseNetworkTransformManager/UpdateJob");
// Dependencies Unity.Mathematics.float3, Unity.Mathematics.quaternion
namespace LobbyNetworking {
// Is value type: true
// CS Name: LobbyNetworking.HouseNetworkTransformManager/TransformData
struct CORDL_TYPE HouseNetworkTransformManager_TransformData {
public:
// Declarations
/// @brief Method .ctor, addr 0x1803d1000, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::LobbyNetworking::HouseNetworkTransform*  networkTransform) ;

// Ctor Parameters []
// @brief default ctor
constexpr HouseNetworkTransformManager_TransformData() ;

// Ctor Parameters [CppParam { name: "networkTransform", ty: "::UnityW<::LobbyNetworking::HouseNetworkTransform>", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "networkPosition", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "networkRotation", ty: "::Unity::Mathematics::quaternion", modifiers: "", def_value: None }, CppParam { name: "isAwake", ty: "bool", modifiers: "", def_value: None }]
constexpr HouseNetworkTransformManager_TransformData(::UnityW<::LobbyNetworking::HouseNetworkTransform>  networkTransform, ::UnityW<::UnityEngine::Transform>  transform, ::Unity::Mathematics::float3  networkPosition, ::Unity::Mathematics::quaternion  networkRotation, bool  isAwake) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5757};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field networkTransform, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::LobbyNetworking::HouseNetworkTransform>  networkTransform;

/// @brief Field transform, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Field networkPosition, offset: 0x10, size: 0xc, def value: None
 ::Unity::Mathematics::float3  networkPosition;

/// @brief Field networkRotation, offset: 0x1c, size: 0x10, def value: None
 ::Unity::Mathematics::quaternion  networkRotation;

/// @brief Field isAwake, offset: 0x2c, size: 0x1, def value: None
 bool  isAwake;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManager_TransformData, networkTransform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManager_TransformData, transform) == 0x8, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManager_TransformData, networkPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManager_TransformData, networkRotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManager_TransformData, isAwake) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::LobbyNetworking::HouseNetworkTransformManager_TransformData) == 0x30, "Size mismatch!");

} // namespace end def LobbyNetworking
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace LobbyNetworking {
// Is value type: true
// CS Name: LobbyNetworking.HouseNetworkTransformManager/TransformJobData
struct CORDL_TYPE HouseNetworkTransformManager_TransformJobData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HouseNetworkTransformManager_TransformJobData() ;

// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
constexpr HouseNetworkTransformManager_TransformJobData(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5758};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManager_TransformJobData, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManager_TransformJobData, rotation) == 0xc, "Offset mismatch!");

static_assert(sizeof(::LobbyNetworking::HouseNetworkTransformManager_TransformJobData) == 0x1c, "Size mismatch!");

} // namespace end def LobbyNetworking
// Dependencies LobbyNetworking.HouseNetworkTransformManager::TransformJobData, Unity.Collections.NativeList`1<T>
namespace LobbyNetworking {
// Is value type: true
// CS Name: LobbyNetworking.HouseNetworkTransformManager/UpdateJob
struct CORDL_TYPE HouseNetworkTransformManager_UpdateJob {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr operator  ::UnityEngine::Jobs::IJobParallelForTransform*() ;

/// @brief Method Execute, addr 0x1803d16d0, size 0x1c0, virtual true, abstract: false, final true
inline void Execute(int32_t  index, ::UnityEngine::Jobs::TransformAccess  transform) ;

/// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform() ;

// Ctor Parameters []
// @brief default ctor
constexpr HouseNetworkTransformManager_UpdateJob() ;

// Ctor Parameters [CppParam { name: "JobData", ty: "::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>", modifiers: "", def_value: None }]
constexpr HouseNetworkTransformManager_UpdateJob(::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>  JobData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5759};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field JobData, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>  JobData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManager_UpdateJob, JobData) == 0x0, "Offset mismatch!");

static_assert(sizeof(::LobbyNetworking::HouseNetworkTransformManager_UpdateJob) == 0x8, "Size mismatch!");

} // namespace end def LobbyNetworking
// Dependencies LobbyNetworking.HouseNetworkTransformManager::TransformJobData, Unity.Collections.NativeList`1<T>, Unity.Jobs.JobHandle, UnityEngine.Jobs.TransformAccessArray, UnityEngine.MonoBehaviour
namespace LobbyNetworking {
// Is value type: false
// CS Name: LobbyNetworking.HouseNetworkTransformManager
class CORDL_TYPE HouseNetworkTransformManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TransformData = ::LobbyNetworking::HouseNetworkTransformManager_TransformData;

using TransformJobData = ::LobbyNetworking::HouseNetworkTransformManager_TransformJobData;

using UpdateJob = ::LobbyNetworking::HouseNetworkTransformManager_UpdateJob;

 __declspec(property(get=get_IndexMap, put=set_IndexMap)) ::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>*  IndexMap;

 __declspec(property(get=get_JobData, put=set_JobData)) ::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>  JobData;

 __declspec(property(get=get_TransformAccessArray, put=set_TransformAccessArray)) ::UnityEngine::Jobs::TransformAccessArray  TransformAccessArray;

/// @brief Field <IndexMap>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__IndexMap_k__BackingField, put=__cordl_internal_set__IndexMap_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>*  _IndexMap_k__BackingField;

/// @brief Field <JobData>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__JobData_k__BackingField, put=__cordl_internal_set__JobData_k__BackingField)) ::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>  _JobData_k__BackingField;

/// @brief Field <TransformAccessArray>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__TransformAccessArray_k__BackingField, put=__cordl_internal_set__TransformAccessArray_k__BackingField)) ::UnityEngine::Jobs::TransformAccessArray  _TransformAccessArray_k__BackingField;

/// @brief Field _isDestroyed, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDestroyed, put=__cordl_internal_set__isDestroyed)) bool  _isDestroyed;

/// @brief Field _jobHandle, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__jobHandle, put=__cordl_internal_set__jobHandle)) ::Unity::Jobs::JobHandle  _jobHandle;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::LobbyNetworking::HouseNetworkTransformManager>  instance;

/// @brief Field logVerbose, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field transformDatas, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformDatas, put=__cordl_internal_set_transformDatas)) ::System::Collections::Generic::List_1<::LobbyNetworking::HouseNetworkTransformManager_TransformData>*  transformDatas;

/// @brief Method AddInternal, addr 0x1803c7ee0, size 0x270, virtual false, abstract: false, final false
inline void AddInternal(::LobbyNetworking::HouseNetworkTransform*  networkTransform) ;

/// @brief Method AddNetworkTransform, addr 0x1803c8150, size 0x40, virtual false, abstract: false, final false
static inline void AddNetworkTransform(::LobbyNetworking::HouseNetworkTransform*  networkTransform) ;

/// @brief Method Awake, addr 0x1803c8190, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DisposeCollections, addr 0x1803c81f0, size 0x50, virtual false, abstract: false, final false
inline void DisposeCollections() ;

/// @brief Method FixedUpdate, addr 0x1803c8240, size 0x430, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method Initialize, addr 0x1803c8710, size 0x160, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method InitializeCollections, addr 0x1803c8670, size 0xa0, virtual false, abstract: false, final false
inline void InitializeCollections() ;

static inline ::LobbyNetworking::HouseNetworkTransformManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803c8870, size 0x50, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnSync, addr 0x1803c88c0, size 0x170, virtual false, abstract: false, final false
static inline void OnSync(::LobbyNetworking::HouseNetworkTransform*  networkTransform) ;

/// @brief Method RemoveAtSwapBack, addr 0x1803c8a30, size 0x100, virtual false, abstract: false, final false
inline void RemoveAtSwapBack(int32_t  index, ::by_ref<::LobbyNetworking::HouseNetworkTransformManager_TransformData>  swappedValue) ;

/// @brief Method RemoveInternal, addr 0x1803c8b30, size 0x1b0, virtual false, abstract: false, final false
inline void RemoveInternal(::LobbyNetworking::HouseNetworkTransform*  networkTransform) ;

/// @brief Method RemoveNetworkTransform, addr 0x1803c8ce0, size 0x1d0, virtual false, abstract: false, final false
static inline void RemoveNetworkTransform(::LobbyNetworking::HouseNetworkTransform*  networkTransform) ;

/// @brief Method ScheduleJobs, addr 0x1803c8eb0, size 0x60, virtual false, abstract: false, final false
inline void ScheduleJobs() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>* const& __cordl_internal_get__IndexMap_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>*& __cordl_internal_get__IndexMap_k__BackingField() ;

constexpr ::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData> const& __cordl_internal_get__JobData_k__BackingField() const;

constexpr ::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>& __cordl_internal_get__JobData_k__BackingField() ;

constexpr ::UnityEngine::Jobs::TransformAccessArray const& __cordl_internal_get__TransformAccessArray_k__BackingField() const;

constexpr ::UnityEngine::Jobs::TransformAccessArray& __cordl_internal_get__TransformAccessArray_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isDestroyed() const;

constexpr bool& __cordl_internal_get__isDestroyed() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get__jobHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get__jobHandle() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::System::Collections::Generic::List_1<::LobbyNetworking::HouseNetworkTransformManager_TransformData>* const& __cordl_internal_get_transformDatas() const;

constexpr ::System::Collections::Generic::List_1<::LobbyNetworking::HouseNetworkTransformManager_TransformData>*& __cordl_internal_get_transformDatas() ;

constexpr void __cordl_internal_set__IndexMap_k__BackingField(::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>*  value) ;

constexpr void __cordl_internal_set__JobData_k__BackingField(::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>  value) ;

constexpr void __cordl_internal_set__TransformAccessArray_k__BackingField(::UnityEngine::Jobs::TransformAccessArray  value) ;

constexpr void __cordl_internal_set__isDestroyed(bool  value) ;

constexpr void __cordl_internal_set__jobHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_transformDatas(::System::Collections::Generic::List_1<::LobbyNetworking::HouseNetworkTransformManager_TransformData>*  value) ;

/// @brief Method .ctor, addr 0x1803c8f10, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::LobbyNetworking::HouseNetworkTransformManager> getStaticF_instance() ;

/// @brief Method get_IndexMap, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>* get_IndexMap() ;

/// @brief Method get_JobData, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData> get_JobData() ;

/// @brief Method get_TransformAccessArray, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Jobs::TransformAccessArray get_TransformAccessArray() ;

static inline void setStaticF_instance(::UnityW<::LobbyNetworking::HouseNetworkTransformManager>  value) ;

/// @brief Method set_IndexMap, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_IndexMap(::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>*  value) ;

/// @brief Method set_JobData, addr 0x1803c8fa0, size 0x10, virtual false, abstract: false, final false
inline void set_JobData(::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>  value) ;

/// @brief Method set_TransformAccessArray, addr 0x1803c8fb0, size 0x10, virtual false, abstract: false, final false
inline void set_TransformAccessArray(::UnityEngine::Jobs::TransformAccessArray  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HouseNetworkTransformManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HouseNetworkTransformManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HouseNetworkTransformManager(HouseNetworkTransformManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HouseNetworkTransformManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HouseNetworkTransformManager(HouseNetworkTransformManager const& ) = delete;

/// @brief Field MaxInstances offset 0xffffffff size 0x4
static constexpr int32_t  MaxInstances{static_cast<int32_t>(0x400)};

/// @brief Field Sensitivity offset 0xffffffff size 0x4
static constexpr float_t  Sensitivity{static_cast<float_t>(0.01f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5760};

/// @brief Field transformDatas, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::LobbyNetworking::HouseNetworkTransformManager_TransformData>*  ___transformDatas;

/// @brief Field <IndexMap>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::LobbyNetworking::HouseNetworkTransform>,int32_t>*  ____IndexMap_k__BackingField;

/// @brief Field <JobData>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::LobbyNetworking::HouseNetworkTransformManager_TransformJobData>  ____JobData_k__BackingField;

/// @brief Field <TransformAccessArray>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Jobs::TransformAccessArray  ____TransformAccessArray_k__BackingField;

/// @brief Field _jobHandle, offset: 0x40, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ____jobHandle;

/// @brief Field _isDestroyed, offset: 0x50, size: 0x1, def value: None
 bool  ____isDestroyed;

/// @brief Field logVerbose, offset: 0x51, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManager, ___transformDatas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManager, ____IndexMap_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManager, ____JobData_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManager, ____TransformAccessArray_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManager, ____jobHandle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManager, ____isDestroyed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::LobbyNetworking::HouseNetworkTransformManager, ___logVerbose) == 0x51, "Offset mismatch!");

static_assert(sizeof(::LobbyNetworking::HouseNetworkTransformManager) == 0x58, "Size mismatch!");

} // namespace end def LobbyNetworking
