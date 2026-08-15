#pragma once
// IWYU pragma private; include "GlobalNamespace/VegetationAudioCullingContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RemotePlayerData_def.hpp"
#include "GlobalNamespace/zzzz__RustleOperation_def.hpp"
#include "GlobalNamespace/zzzz__VegetationGroupJobData_def.hpp"
#include "GlobalNamespace/zzzz__VegetationSoundElement_def.hpp"
#include "GlobalNamespace/zzzz__WindyOperation_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeQueue_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VegetationAudioCullingContainer)
namespace GlobalNamespace {
class AudioRandomContainer;
}
namespace GlobalNamespace {
class FootstepSound;
}
namespace GlobalNamespace {
class VegetationSoundCullingGroup;
}
namespace GlobalNamespace {
struct VegetationSoundElement;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class VegetationAudioCullingContainer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VegetationAudioCullingContainer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VegetationAudioCullingContainer*, "", "VegetationAudioCullingContainer");
// Dependencies RemotePlayerData, RustleOperation, System.Object, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeQueue`1<T>, Unity.Jobs.JobHandle, VegetationGroupJobData, VegetationSoundElement, WindyOperation
namespace GlobalNamespace {
// Is value type: false
// CS Name: VegetationAudioCullingContainer
class CORDL_TYPE VegetationAudioCullingContainer : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field currentJobRemotePlayers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentJobRemotePlayers, put=__cordl_internal_set_currentJobRemotePlayers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*  currentJobRemotePlayers;

/// @brief Field elements, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_elements, put=__cordl_internal_set_elements)) ::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationSoundElement>  elements;

/// @brief Field groupJobData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_groupJobData, put=__cordl_internal_set_groupJobData)) ::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationGroupJobData>  groupJobData;

/// @brief Field groups, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_groups, put=__cordl_internal_set_groups)) ::System::Collections::Generic::List_1<::GlobalNamespace::VegetationSoundCullingGroup*>*  groups;

/// @brief Field jobHandle, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_jobHandle, put=__cordl_internal_set_jobHandle)) ::Unity::Jobs::JobHandle  jobHandle;

/// @brief Field jobNeedsCompletion, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_jobNeedsCompletion, put=__cordl_internal_set_jobNeedsCompletion)) bool  jobNeedsCompletion;

/// @brief Field maxDistanceSq, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceSq, put=__cordl_internal_set_maxDistanceSq)) float_t  maxDistanceSq;

/// @brief Field remotePlayerJobData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_remotePlayerJobData, put=__cordl_internal_set_remotePlayerJobData)) ::Unity::Collections::NativeList_1<::GlobalNamespace::RemotePlayerData>  remotePlayerJobData;

/// @brief Field rustleOperations, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rustleOperations, put=__cordl_internal_set_rustleOperations)) ::Unity::Collections::NativeQueue_1<::GlobalNamespace::RustleOperation>  rustleOperations;

/// @brief Field windyOperations, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_windyOperations, put=__cordl_internal_set_windyOperations)) ::Unity::Collections::NativeQueue_1<::GlobalNamespace::WindyOperation>  windyOperations;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Add, addr 0x1803e2310, size 0x190, virtual false, abstract: false, final false
inline void Add(::UnityEngine::GameObject*  gameObj, ::ArrayW<::UnityEngine::BoundingSphere>  spheres, ::ArrayW<float_t>  distances, bool  isDetail, float_t  treeness, ::GlobalNamespace::AudioRandomContainer*  rustleSound, ::GlobalNamespace::AudioRandomContainer*  windySound) ;

/// @brief Method CompleteJob, addr 0x1803e24a0, size 0x190, virtual false, abstract: false, final false
inline void CompleteJob() ;

/// @brief Method CopyRemotePlayerList, addr 0x1803e2630, size 0x70, virtual false, abstract: false, final false
inline void CopyRemotePlayerList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*  remoteFootstepPlayers) ;

/// @brief Method Dispose, addr 0x1803e26a0, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FinishInitialization, addr 0x1803e2710, size 0x290, virtual false, abstract: false, final false
inline void FinishInitialization(::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>*  comparer) ;

/// @brief Method GetBatchCount, addr 0x1803e29a0, size 0x50, virtual false, abstract: false, final false
static inline int32_t GetBatchCount(int32_t  elementCount) ;

/// @brief Method GetElement, addr 0x1803e29f0, size 0x20, virtual false, abstract: false, final false
inline ::GlobalNamespace::VegetationSoundElement GetElement(int32_t  index) ;

/// @brief Method GetGroup, addr 0x1803e2ac0, size 0x30, virtual false, abstract: false, final false
inline ::GlobalNamespace::VegetationSoundCullingGroup* GetGroup(int32_t  index) ;

/// @brief Method GetGroupIndexOfPrefab, addr 0x1803e2a10, size 0xb0, virtual false, abstract: false, final false
inline int32_t GetGroupIndexOfPrefab(::UnityEngine::GameObject*  prefab) ;

/// @brief Method GetGroups, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::VegetationSoundCullingGroup*>* GetGroups() ;

/// @brief Method GetNextPowerOfTwo, addr 0x1803e2af0, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetNextPowerOfTwo(float_t  count) ;

/// @brief Method GetPlayerIndex, addr 0x1803e2b10, size 0x80, virtual false, abstract: false, final false
inline int32_t GetPlayerIndex(::GlobalNamespace::FootstepSound*  playerFootstepSound) ;

static inline ::GlobalNamespace::VegetationAudioCullingContainer* New_ctor() ;

/// @brief Method RunJob, addr 0x1803e2b90, size 0x280, virtual false, abstract: false, final false
inline void RunJob(::Unity::Mathematics::float3  localPlayerPosition, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*  remoteFootstepPlayers, bool  useBobPosition) ;

/// @brief Method UpdateRemotePlayers, addr 0x1803e2e10, size 0x1f0, virtual false, abstract: false, final false
inline void UpdateRemotePlayers(::Unity::Mathematics::float3  localPlayerPosition, bool  useBobPosition) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>* const& __cordl_internal_get_currentJobRemotePlayers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*& __cordl_internal_get_currentJobRemotePlayers() ;

constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationSoundElement> const& __cordl_internal_get_elements() const;

constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationSoundElement>& __cordl_internal_get_elements() ;

constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationGroupJobData> const& __cordl_internal_get_groupJobData() const;

constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationGroupJobData>& __cordl_internal_get_groupJobData() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VegetationSoundCullingGroup*>* const& __cordl_internal_get_groups() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::VegetationSoundCullingGroup*>*& __cordl_internal_get_groups() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_jobHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_jobHandle() ;

constexpr bool const& __cordl_internal_get_jobNeedsCompletion() const;

constexpr bool& __cordl_internal_get_jobNeedsCompletion() ;

constexpr float_t const& __cordl_internal_get_maxDistanceSq() const;

constexpr float_t& __cordl_internal_get_maxDistanceSq() ;

constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::RemotePlayerData> const& __cordl_internal_get_remotePlayerJobData() const;

constexpr ::Unity::Collections::NativeList_1<::GlobalNamespace::RemotePlayerData>& __cordl_internal_get_remotePlayerJobData() ;

constexpr ::Unity::Collections::NativeQueue_1<::GlobalNamespace::RustleOperation> const& __cordl_internal_get_rustleOperations() const;

constexpr ::Unity::Collections::NativeQueue_1<::GlobalNamespace::RustleOperation>& __cordl_internal_get_rustleOperations() ;

constexpr ::Unity::Collections::NativeQueue_1<::GlobalNamespace::WindyOperation> const& __cordl_internal_get_windyOperations() const;

constexpr ::Unity::Collections::NativeQueue_1<::GlobalNamespace::WindyOperation>& __cordl_internal_get_windyOperations() ;

constexpr void __cordl_internal_set_currentJobRemotePlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*  value) ;

constexpr void __cordl_internal_set_elements(::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationSoundElement>  value) ;

constexpr void __cordl_internal_set_groupJobData(::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationGroupJobData>  value) ;

constexpr void __cordl_internal_set_groups(::System::Collections::Generic::List_1<::GlobalNamespace::VegetationSoundCullingGroup*>*  value) ;

constexpr void __cordl_internal_set_jobHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set_jobNeedsCompletion(bool  value) ;

constexpr void __cordl_internal_set_maxDistanceSq(float_t  value) ;

constexpr void __cordl_internal_set_remotePlayerJobData(::Unity::Collections::NativeList_1<::GlobalNamespace::RemotePlayerData>  value) ;

constexpr void __cordl_internal_set_rustleOperations(::Unity::Collections::NativeQueue_1<::GlobalNamespace::RustleOperation>  value) ;

constexpr void __cordl_internal_set_windyOperations(::Unity::Collections::NativeQueue_1<::GlobalNamespace::WindyOperation>  value) ;

/// @brief Method .ctor, addr 0x1803e3000, size 0x150, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x1802f4180, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VegetationAudioCullingContainer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VegetationAudioCullingContainer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VegetationAudioCullingContainer(VegetationAudioCullingContainer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VegetationAudioCullingContainer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VegetationAudioCullingContainer(VegetationAudioCullingContainer const& ) = delete;

/// @brief Field GlobalMaxRemotePlayerDistance offset 0xffffffff size 0x4
static constexpr float_t  GlobalMaxRemotePlayerDistance{static_cast<float_t>(30.0f)};

/// @brief Field GlobalMaxRemotePlayerDistanceSq offset 0xffffffff size 0x4
static constexpr float_t  GlobalMaxRemotePlayerDistanceSq{static_cast<float_t>(900.0f)};

/// @brief Field MaxPlayerCount offset 0xffffffff size 0x4
static constexpr int32_t  MaxPlayerCount{static_cast<int32_t>(0xc)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4880};

/// @brief Field groups, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::VegetationSoundCullingGroup*>*  ___groups;

/// @brief Field groupJobData, offset: 0x18, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationGroupJobData>  ___groupJobData;

/// @brief Field elements, offset: 0x20, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GlobalNamespace::VegetationSoundElement>  ___elements;

/// @brief Field remotePlayerJobData, offset: 0x28, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GlobalNamespace::RemotePlayerData>  ___remotePlayerJobData;

/// @brief Field rustleOperations, offset: 0x30, size: 0x8, def value: None
 ::Unity::Collections::NativeQueue_1<::GlobalNamespace::RustleOperation>  ___rustleOperations;

/// @brief Field windyOperations, offset: 0x38, size: 0x8, def value: None
 ::Unity::Collections::NativeQueue_1<::GlobalNamespace::WindyOperation>  ___windyOperations;

/// @brief Field currentJobRemotePlayers, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*  ___currentJobRemotePlayers;

/// @brief Field jobNeedsCompletion, offset: 0x48, size: 0x1, def value: None
 bool  ___jobNeedsCompletion;

/// @brief Field jobHandle, offset: 0x50, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___jobHandle;

/// @brief Field maxDistanceSq, offset: 0x60, size: 0x4, def value: None
 float_t  ___maxDistanceSq;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VegetationAudioCullingContainer, ___groups) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationAudioCullingContainer, ___groupJobData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationAudioCullingContainer, ___elements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationAudioCullingContainer, ___remotePlayerJobData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationAudioCullingContainer, ___rustleOperations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationAudioCullingContainer, ___windyOperations) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationAudioCullingContainer, ___currentJobRemotePlayers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationAudioCullingContainer, ___jobNeedsCompletion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationAudioCullingContainer, ___jobHandle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VegetationAudioCullingContainer, ___maxDistanceSq) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VegetationAudioCullingContainer) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
