#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioOcclusion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioOcclusionBase_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioOcclusion)
namespace GlobalNamespace {
class AudioMaterialConfig;
}
namespace GlobalNamespace {
class AudioOcclusionConfig;
}
namespace GlobalNamespace {
struct AudioOcclusion_RaycastRequest;
}
namespace GlobalNamespace {
struct AudioOcclusion_ResultData;
}
namespace GlobalNamespace {
struct AudioOcclusion_SkippedRaycastInfo;
}
namespace GlobalNamespace {
class FixedSizeFloatQueue;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class PhysicsMaterial;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioOcclusion;
}
namespace GlobalNamespace {
struct AudioOcclusion_RaycastRequest;
}
namespace GlobalNamespace {
struct AudioOcclusion_ResultData;
}
namespace GlobalNamespace {
struct AudioOcclusion_SkippedRaycastInfo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioOcclusion*);
MARK_VAL_T(::GlobalNamespace::AudioOcclusion_RaycastRequest);
MARK_VAL_T(::GlobalNamespace::AudioOcclusion_ResultData);
MARK_VAL_T(::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioOcclusion*, "", "AudioOcclusion");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioOcclusion_RaycastRequest, "", "AudioOcclusion/RaycastRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioOcclusion_ResultData, "", "AudioOcclusion/ResultData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo, "", "AudioOcclusion/SkippedRaycastInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioOcclusion/ResultData
struct CORDL_TYPE AudioOcclusion_ResultData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AudioOcclusion_ResultData() ;

// Ctor Parameters [CppParam { name: "result", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "newVoiceBlock", ty: "float_t", modifiers: "", def_value: None }]
constexpr AudioOcclusion_ResultData(float_t  result, float_t  newVoiceBlock) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17531};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field result, offset: 0x0, size: 0x4, def value: None
 float_t  result;

/// @brief Field newVoiceBlock, offset: 0x4, size: 0x4, def value: None
 float_t  newVoiceBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioOcclusion_ResultData, result) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion_ResultData, newVoiceBlock) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioOcclusion_ResultData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.Ray
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioOcclusion/RaycastRequest
struct CORDL_TYPE AudioOcclusion_RaycastRequest {
public:
// Declarations
/// @brief Method GetVector, addr 0x180497ce0, size 0xb0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetVector() ;

// Ctor Parameters []
// @brief default ctor
constexpr AudioOcclusion_RaycastRequest() ;

// Ctor Parameters [CppParam { name: "ray", ty: "::UnityEngine::Ray", modifiers: "", def_value: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }]
constexpr AudioOcclusion_RaycastRequest(::UnityEngine::Ray  ray, float_t  distance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17532};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field ray, offset: 0x0, size: 0x18, def value: None
 ::UnityEngine::Ray  ray;

/// @brief Field distance, offset: 0x18, size: 0x4, def value: None
 float_t  distance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioOcclusion_RaycastRequest, ray) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion_RaycastRequest, distance) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioOcclusion_RaycastRequest) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.Ray, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioOcclusion/SkippedRaycastInfo
struct CORDL_TYPE AudioOcclusion_SkippedRaycastInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AudioOcclusion_SkippedRaycastInfo() ;

// Ctor Parameters [CppParam { name: "vector", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "ray", ty: "::UnityEngine::Ray", modifiers: "", def_value: None }]
constexpr AudioOcclusion_SkippedRaycastInfo(::UnityEngine::Vector3  vector, ::UnityEngine::Ray  ray) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17533};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x24};

/// @brief Field vector, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  vector;

/// @brief Field ray, offset: 0xc, size: 0x18, def value: None
 ::UnityEngine::Ray  ray;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo, vector) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo, ray) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo) == 0x24, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies AudioOcclusionBase, Unity.Collections.NativeArray`1<T>, UnityEngine.LayerMask, UnityEngine.QueryTriggerInteraction, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioOcclusion
class CORDL_TYPE AudioOcclusion : public ::GlobalNamespace::AudioOcclusionBase {
public:
// Declarations
using RaycastRequest = ::GlobalNamespace::AudioOcclusion_RaycastRequest;

using ResultData = ::GlobalNamespace::AudioOcclusion_ResultData;

using SkippedRaycastInfo = ::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo;

/// @brief Field Debug, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_Debug, put=__cordl_internal_set_Debug)) bool  Debug;

 __declspec(property(get=get_DetectTrigger)) ::UnityEngine::QueryTriggerInteraction  DetectTrigger;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_Layer)) ::UnityEngine::LayerMask  Layer;

 __declspec(property(get=get_OccLvl, put=set_OccLvl)) float_t  OccLvl;

 __declspec(property(get=get_OutOfRange)) bool  OutOfRange;

 __declspec(property(get=get_RandomPointTowardsSource, put=set_RandomPointTowardsSource)) ::UnityEngine::Vector3  RandomPointTowardsSource;

 __declspec(property(get=get_VoiceBlockingLvl, put=set_VoiceBlockingLvl)) float_t  VoiceBlockingLvl;

/// @brief Field <OccLvl>k__BackingField, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__OccLvl_k__BackingField, put=__cordl_internal_set__OccLvl_k__BackingField)) float_t  _OccLvl_k__BackingField;

/// @brief Field <RandomPointTowardsSource>k__BackingField, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get__RandomPointTowardsSource_k__BackingField, put=__cordl_internal_set__RandomPointTowardsSource_k__BackingField)) ::UnityEngine::Vector3  _RandomPointTowardsSource_k__BackingField;

/// @brief Field <VoiceBlockingLvl>k__BackingField, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__VoiceBlockingLvl_k__BackingField, put=__cordl_internal_set__VoiceBlockingLvl_k__BackingField)) float_t  _VoiceBlockingLvl_k__BackingField;

/// @brief Field _asyncResults, offset 0x100, size 0x10 
 __declspec(property(get=__cordl_internal_get__asyncResults, put=__cordl_internal_set__asyncResults)) ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  _asyncResults;

/// @brief Field _asyncResultsOffset, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get__asyncResultsOffset, put=__cordl_internal_set__asyncResultsOffset)) int32_t  _asyncResultsOffset;

/// @brief Field _avg, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__avg, put=__cordl_internal_set__avg)) float_t  _avg;

/// @brief Field _collideInfo, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__collideInfo, put=__cordl_internal_set__collideInfo)) ::GlobalNamespace::FixedSizeFloatQueue*  _collideInfo;

/// @brief Field _currentDirectDirection, offset 0xf4, size 0xc 
 __declspec(property(get=__cordl_internal_get__currentDirectDirection, put=__cordl_internal_set__currentDirectDirection)) ::UnityEngine::Vector3  _currentDirectDirection;

/// @brief Field _currentHeadPosition, offset 0xdc, size 0xc 
 __declspec(property(get=__cordl_internal_get__currentHeadPosition, put=__cordl_internal_set__currentHeadPosition)) ::UnityEngine::Vector3  _currentHeadPosition;

/// @brief Field _currentRaycastIndex, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentRaycastIndex, put=__cordl_internal_set__currentRaycastIndex)) int32_t  _currentRaycastIndex;

/// @brief Field _currentSkippedDirectionIndex, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentSkippedDirectionIndex, put=__cordl_internal_set__currentSkippedDirectionIndex)) int32_t  _currentSkippedDirectionIndex;

/// @brief Field _currentSourcePosition, offset 0xe8, size 0xc 
 __declspec(property(get=__cordl_internal_get__currentSourcePosition, put=__cordl_internal_set__currentSourcePosition)) ::UnityEngine::Vector3  _currentSourcePosition;

/// @brief Field _detectTrigger, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__detectTrigger, put=__cordl_internal_set__detectTrigger)) ::UnityEngine::QueryTriggerInteraction  _detectTrigger;

/// @brief Field _hitAroundPlayerInfo, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__hitAroundPlayerInfo, put=__cordl_internal_set__hitAroundPlayerInfo)) ::ArrayW<::UnityEngine::RaycastHit>  _hitAroundPlayerInfo;

/// @brief Field _hitAroundSourceInfo, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__hitAroundSourceInfo, put=__cordl_internal_set__hitAroundSourceInfo)) ::ArrayW<::UnityEngine::RaycastHit>  _hitAroundSourceInfo;

/// @brief Field _hitCenterInfo, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__hitCenterInfo, put=__cordl_internal_set__hitCenterInfo)) ::ArrayW<::UnityEngine::RaycastHit>  _hitCenterInfo;

/// @brief Field _hitRandomPSInfo, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__hitRandomPSInfo, put=__cordl_internal_set__hitRandomPSInfo)) ::ArrayW<::UnityEngine::RaycastHit>  _hitRandomPSInfo;

/// @brief Field _hitRandomSPInfo, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__hitRandomSPInfo, put=__cordl_internal_set__hitRandomSPInfo)) ::ArrayW<::UnityEngine::RaycastHit>  _hitRandomSPInfo;

/// @brief Field _initialized, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _isAsync, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isAsync, put=__cordl_internal_set__isAsync)) bool  _isAsync;

/// @brief Field _layer, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__layer, put=__cordl_internal_set__layer)) ::UnityEngine::LayerMask  _layer;

/// @brief Field _materialConfig, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialConfig, put=__cordl_internal_set__materialConfig)) ::UnityW<::GlobalNamespace::AudioMaterialConfig>  _materialConfig;

/// @brief Field _maxDistance, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDistance, put=__cordl_internal_set__maxDistance)) float_t  _maxDistance;

/// @brief Field _maxDistanceSquared, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDistanceSquared, put=__cordl_internal_set__maxDistanceSquared)) float_t  _maxDistanceSquared;

/// @brief Field _minDistance, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__minDistance, put=__cordl_internal_set__minDistance)) float_t  _minDistance;

/// @brief Field _outOfRange, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get__outOfRange, put=__cordl_internal_set__outOfRange)) bool  _outOfRange;

/// @brief Field _raycastRequests, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__raycastRequests, put=__cordl_internal_set__raycastRequests)) ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*  _raycastRequests;

/// @brief Field _skippedRaycasts, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__skippedRaycasts, put=__cordl_internal_set__skippedRaycasts)) ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo>*  _skippedRaycasts;

/// @brief Field _updateRate, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__updateRate, put=__cordl_internal_set__updateRate)) int32_t  _updateRate;

/// @brief Field _voiceBlockingAvg, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__voiceBlockingAvg, put=__cordl_internal_set__voiceBlockingAvg)) float_t  _voiceBlockingAvg;

/// @brief Field _voiceBlockingInfo, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceBlockingInfo, put=__cordl_internal_set__voiceBlockingInfo)) ::GlobalNamespace::FixedSizeFloatQueue*  _voiceBlockingInfo;

/// @brief Field _voiceBlockingMaterials, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceBlockingMaterials, put=__cordl_internal_set__voiceBlockingMaterials)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  _voiceBlockingMaterials;

/// @brief Field _waitingForAsyncResults, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get__waitingForAsyncResults, put=__cordl_internal_set__waitingForAsyncResults)) bool  _waitingForAsyncResults;

/// @brief Method ApplyAsyncRaycastResults, addr 0x180485490, size 0x110, virtual false, abstract: false, final false
inline void ApplyAsyncRaycastResults(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  results, int32_t  startOffset) ;

/// @brief Method CalculateOcclusion, addr 0x1804855a0, size 0xc0, virtual false, abstract: false, final false
inline void CalculateOcclusion(bool  forceSync) ;

/// @brief Method CountBlockingHits, addr 0x180485660, size 0xc0, virtual false, abstract: false, final false
inline int32_t CountBlockingHits(::ArrayW<::UnityEngine::RaycastHit>  hits, int32_t  hitCount) ;

/// @brief Method GetNextSkippedInfo, addr 0x180485720, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo GetNextSkippedInfo() ;

/// @brief Method HasVoiceBlockingMaterials, addr 0x180485780, size 0x20, virtual false, abstract: false, final false
inline bool HasVoiceBlockingMaterials() ;

/// @brief Method Initialize, addr 0x1804857a0, size 0x400, virtual true, abstract: false, final false
inline void Initialize(::GlobalNamespace::AudioOcclusionConfig*  config) ;

static inline ::GlobalNamespace::AudioOcclusion* New_ctor() ;

/// @brief Method PrepareRaycasts, addr 0x180485ba0, size 0xa90, virtual false, abstract: false, final false
inline void PrepareRaycasts() ;

/// @brief Method ProcessHit, addr 0x180486630, size 0xe0, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioOcclusion_ResultData ProcessHit(::UnityEngine::RaycastHit  hit, ::GlobalNamespace::AudioOcclusion_ResultData  resultData) ;

/// @brief Method ProcessNextRaycast, addr 0x180486710, size 0x2d0, virtual false, abstract: false, final false
inline int32_t ProcessNextRaycast(::ArrayW<::UnityEngine::RaycastHit>  hits, bool  isSync, ::by_ref<::GlobalNamespace::AudioOcclusion_RaycastRequest>  request) ;

/// @brief Method ProcessRaycasts, addr 0x1804869e0, size 0x9b0, virtual false, abstract: false, final false
inline void ProcessRaycasts(bool  isSync) ;

/// @brief Method SetAsync, addr 0x180487390, size 0x10, virtual false, abstract: false, final false
inline void SetAsync(bool  isAsync) ;

/// @brief Method ShouldCheckIgnore, addr 0x1804873a0, size 0xa0, virtual false, abstract: false, final false
static inline bool ShouldCheckIgnore(::UnityEngine::Vector3  dir_AroundPlayer, ::UnityEngine::Vector3  dir_Direct, ::UnityEngine::Vector3  dir_AroundSource) ;

/// @brief Method UpdateOcclusion, addr 0x180487550, size 0x160, virtual true, abstract: false, final false
inline void UpdateOcclusion() ;

/// @brief Method UpdateOcclusionValues, addr 0x180487440, size 0x110, virtual false, abstract: false, final false
inline void UpdateOcclusionValues() ;

constexpr bool const& __cordl_internal_get_Debug() const;

constexpr bool& __cordl_internal_get_Debug() ;

constexpr float_t const& __cordl_internal_get__OccLvl_k__BackingField() const;

constexpr float_t& __cordl_internal_get__OccLvl_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__RandomPointTowardsSource_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__RandomPointTowardsSource_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__VoiceBlockingLvl_k__BackingField() const;

constexpr float_t& __cordl_internal_get__VoiceBlockingLvl_k__BackingField() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& __cordl_internal_get__asyncResults() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& __cordl_internal_get__asyncResults() ;

constexpr int32_t const& __cordl_internal_get__asyncResultsOffset() const;

constexpr int32_t& __cordl_internal_get__asyncResultsOffset() ;

constexpr float_t const& __cordl_internal_get__avg() const;

constexpr float_t& __cordl_internal_get__avg() ;

constexpr ::GlobalNamespace::FixedSizeFloatQueue* const& __cordl_internal_get__collideInfo() const;

constexpr ::GlobalNamespace::FixedSizeFloatQueue*& __cordl_internal_get__collideInfo() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__currentDirectDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__currentDirectDirection() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__currentHeadPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__currentHeadPosition() ;

constexpr int32_t const& __cordl_internal_get__currentRaycastIndex() const;

constexpr int32_t& __cordl_internal_get__currentRaycastIndex() ;

constexpr int32_t const& __cordl_internal_get__currentSkippedDirectionIndex() const;

constexpr int32_t& __cordl_internal_get__currentSkippedDirectionIndex() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__currentSourcePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__currentSourcePosition() ;

constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get__detectTrigger() const;

constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get__detectTrigger() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get__hitAroundPlayerInfo() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get__hitAroundPlayerInfo() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get__hitAroundSourceInfo() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get__hitAroundSourceInfo() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get__hitCenterInfo() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get__hitCenterInfo() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get__hitRandomPSInfo() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get__hitRandomPSInfo() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get__hitRandomSPInfo() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get__hitRandomSPInfo() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr bool const& __cordl_internal_get__isAsync() const;

constexpr bool& __cordl_internal_get__isAsync() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__layer() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__layer() ;

constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig> const& __cordl_internal_get__materialConfig() const;

constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig>& __cordl_internal_get__materialConfig() ;

constexpr float_t const& __cordl_internal_get__maxDistance() const;

constexpr float_t& __cordl_internal_get__maxDistance() ;

constexpr float_t const& __cordl_internal_get__maxDistanceSquared() const;

constexpr float_t& __cordl_internal_get__maxDistanceSquared() ;

constexpr float_t const& __cordl_internal_get__minDistance() const;

constexpr float_t& __cordl_internal_get__minDistance() ;

constexpr bool const& __cordl_internal_get__outOfRange() const;

constexpr bool& __cordl_internal_get__outOfRange() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>* const& __cordl_internal_get__raycastRequests() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*& __cordl_internal_get__raycastRequests() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo>* const& __cordl_internal_get__skippedRaycasts() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo>*& __cordl_internal_get__skippedRaycasts() ;

constexpr int32_t const& __cordl_internal_get__updateRate() const;

constexpr int32_t& __cordl_internal_get__updateRate() ;

constexpr float_t const& __cordl_internal_get__voiceBlockingAvg() const;

constexpr float_t& __cordl_internal_get__voiceBlockingAvg() ;

constexpr ::GlobalNamespace::FixedSizeFloatQueue* const& __cordl_internal_get__voiceBlockingInfo() const;

constexpr ::GlobalNamespace::FixedSizeFloatQueue*& __cordl_internal_get__voiceBlockingInfo() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>* const& __cordl_internal_get__voiceBlockingMaterials() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*& __cordl_internal_get__voiceBlockingMaterials() ;

constexpr bool const& __cordl_internal_get__waitingForAsyncResults() const;

constexpr bool& __cordl_internal_get__waitingForAsyncResults() ;

constexpr void __cordl_internal_set_Debug(bool  value) ;

constexpr void __cordl_internal_set__OccLvl_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__RandomPointTowardsSource_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__VoiceBlockingLvl_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__asyncResults(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__asyncResultsOffset(int32_t  value) ;

constexpr void __cordl_internal_set__avg(float_t  value) ;

constexpr void __cordl_internal_set__collideInfo(::GlobalNamespace::FixedSizeFloatQueue*  value) ;

constexpr void __cordl_internal_set__currentDirectDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__currentHeadPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__currentRaycastIndex(int32_t  value) ;

constexpr void __cordl_internal_set__currentSkippedDirectionIndex(int32_t  value) ;

constexpr void __cordl_internal_set__currentSourcePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__detectTrigger(::UnityEngine::QueryTriggerInteraction  value) ;

constexpr void __cordl_internal_set__hitAroundPlayerInfo(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__hitAroundSourceInfo(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__hitCenterInfo(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__hitRandomPSInfo(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__hitRandomSPInfo(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__isAsync(bool  value) ;

constexpr void __cordl_internal_set__layer(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__materialConfig(::UnityW<::GlobalNamespace::AudioMaterialConfig>  value) ;

constexpr void __cordl_internal_set__maxDistance(float_t  value) ;

constexpr void __cordl_internal_set__maxDistanceSquared(float_t  value) ;

constexpr void __cordl_internal_set__minDistance(float_t  value) ;

constexpr void __cordl_internal_set__outOfRange(bool  value) ;

constexpr void __cordl_internal_set__raycastRequests(::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*  value) ;

constexpr void __cordl_internal_set__skippedRaycasts(::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo>*  value) ;

constexpr void __cordl_internal_set__updateRate(int32_t  value) ;

constexpr void __cordl_internal_set__voiceBlockingAvg(float_t  value) ;

constexpr void __cordl_internal_set__voiceBlockingInfo(::GlobalNamespace::FixedSizeFloatQueue*  value) ;

constexpr void __cordl_internal_set__voiceBlockingMaterials(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  value) ;

constexpr void __cordl_internal_set__waitingForAsyncResults(bool  value) ;

/// @brief Method .ctor, addr 0x1804876b0, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DetectTrigger, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::QueryTriggerInteraction get_DetectTrigger() ;

/// @brief Method get_Initialized, addr 0x1803e0b00, size 0x10, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_Layer, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_Layer() ;

/// @brief Method get_OccLvl, addr 0x1803e0b10, size 0x10, virtual true, abstract: false, final false
inline float_t get_OccLvl() ;

/// @brief Method get_OutOfRange, addr 0x1803e0b20, size 0x10, virtual false, abstract: false, final false
inline bool get_OutOfRange() ;

/// @brief Method get_RandomPointTowardsSource, addr 0x1803e0b30, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_RandomPointTowardsSource() ;

/// @brief Method get_VoiceBlockingLvl, addr 0x180487750, size 0x10, virtual true, abstract: false, final false
inline float_t get_VoiceBlockingLvl() ;

/// @brief Method set_OccLvl, addr 0x1803e0b60, size 0x10, virtual true, abstract: false, final false
inline void set_OccLvl(float_t  value) ;

/// @brief Method set_RandomPointTowardsSource, addr 0x1803e0b70, size 0x20, virtual false, abstract: false, final false
inline void set_RandomPointTowardsSource(::UnityEngine::Vector3  value) ;

/// @brief Method set_VoiceBlockingLvl, addr 0x180487760, size 0x10, virtual true, abstract: false, final false
inline void set_VoiceBlockingLvl(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioOcclusion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioOcclusion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioOcclusion(AudioOcclusion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioOcclusion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioOcclusion(AudioOcclusion const& ) = delete;

/// @brief Field CLEAR_PATH_MAX_LVL offset 0xffffffff size 0x4
static constexpr float_t  CLEAR_PATH_MAX_LVL{static_cast<float_t>(0.4f)};

/// @brief Field LERP_SPEED offset 0xffffffff size 0x4
static constexpr float_t  LERP_SPEED{static_cast<float_t>(5.0f)};

/// @brief Field LISTENER_FIELD_SCALER offset 0xffffffff size 0x4
static constexpr float_t  LISTENER_FIELD_SCALER{static_cast<float_t>(6.0f)};

/// @brief Field RaycastHitCount offset 0xffffffff size 0x4
static constexpr int32_t  RaycastHitCount{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17534};

/// @brief Field Debug, offset: 0x28, size: 0x1, def value: None
 bool  ___Debug;

/// @brief Field _layer, offset: 0x2c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____layer;

/// @brief Field _detectTrigger, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::QueryTriggerInteraction  ____detectTrigger;

/// @brief Field _initialized, offset: 0x34, size: 0x1, def value: None
 bool  ____initialized;

/// @brief Field _outOfRange, offset: 0x35, size: 0x1, def value: None
 bool  ____outOfRange;

/// @brief Field _collideInfo, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::FixedSizeFloatQueue*  ____collideInfo;

/// @brief Field _minDistance, offset: 0x40, size: 0x4, def value: None
 float_t  ____minDistance;

/// @brief Field _maxDistance, offset: 0x44, size: 0x4, def value: None
 float_t  ____maxDistance;

/// @brief Field _maxDistanceSquared, offset: 0x48, size: 0x4, def value: None
 float_t  ____maxDistanceSquared;

/// @brief Field _updateRate, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____updateRate;

/// @brief Field _avg, offset: 0x50, size: 0x4, def value: None
 float_t  ____avg;

/// @brief Field _hitRandomSPInfo, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ____hitRandomSPInfo;

/// @brief Field _hitRandomPSInfo, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ____hitRandomPSInfo;

/// @brief Field _hitAroundPlayerInfo, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ____hitAroundPlayerInfo;

/// @brief Field _hitAroundSourceInfo, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ____hitAroundSourceInfo;

/// @brief Field _hitCenterInfo, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ____hitCenterInfo;

/// @brief Field _materialConfig, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioMaterialConfig>  ____materialConfig;

/// @brief Field <RandomPointTowardsSource>k__BackingField, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____RandomPointTowardsSource_k__BackingField;

/// @brief Field <OccLvl>k__BackingField, offset: 0x94, size: 0x4, def value: None
 float_t  ____OccLvl_k__BackingField;

/// @brief Field <VoiceBlockingLvl>k__BackingField, offset: 0x98, size: 0x4, def value: None
 float_t  ____VoiceBlockingLvl_k__BackingField;

/// @brief Field _voiceBlockingInfo, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::FixedSizeFloatQueue*  ____voiceBlockingInfo;

/// @brief Field _voiceBlockingAvg, offset: 0xa8, size: 0x4, def value: None
 float_t  ____voiceBlockingAvg;

/// @brief Field _voiceBlockingMaterials, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  ____voiceBlockingMaterials;

/// @brief Field _isAsync, offset: 0xb8, size: 0x1, def value: None
 bool  ____isAsync;

/// @brief Field _waitingForAsyncResults, offset: 0xb9, size: 0x1, def value: None
 bool  ____waitingForAsyncResults;

/// @brief Field _raycastRequests, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_RaycastRequest>*  ____raycastRequests;

/// @brief Field _currentRaycastIndex, offset: 0xc8, size: 0x4, def value: None
 int32_t  ____currentRaycastIndex;

/// @brief Field _skippedRaycasts, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AudioOcclusion_SkippedRaycastInfo>*  ____skippedRaycasts;

/// @brief Field _currentSkippedDirectionIndex, offset: 0xd8, size: 0x4, def value: None
 int32_t  ____currentSkippedDirectionIndex;

/// @brief Field _currentHeadPosition, offset: 0xdc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____currentHeadPosition;

/// @brief Field _currentSourcePosition, offset: 0xe8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____currentSourcePosition;

/// @brief Field _currentDirectDirection, offset: 0xf4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____currentDirectDirection;

/// @brief Field _asyncResults, offset: 0x100, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  ____asyncResults;

/// @brief Field _asyncResultsOffset, offset: 0x110, size: 0x4, def value: None
 int32_t  ____asyncResultsOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ___Debug) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____layer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____detectTrigger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____initialized) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____outOfRange) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____collideInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____minDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____maxDistance) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____maxDistanceSquared) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____updateRate) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____avg) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____hitRandomSPInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____hitRandomPSInfo) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____hitAroundPlayerInfo) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____hitAroundSourceInfo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____hitCenterInfo) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____materialConfig) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____RandomPointTowardsSource_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____OccLvl_k__BackingField) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____VoiceBlockingLvl_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____voiceBlockingInfo) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____voiceBlockingAvg) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____voiceBlockingMaterials) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____isAsync) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____waitingForAsyncResults) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____raycastRequests) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____currentRaycastIndex) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____skippedRaycasts) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____currentSkippedDirectionIndex) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____currentHeadPosition) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____currentSourcePosition) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____currentDirectDirection) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____asyncResults) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusion, ____asyncResultsOffset) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioOcclusion) == 0x118, "Size mismatch!");

} // namespace end def GlobalNamespace
