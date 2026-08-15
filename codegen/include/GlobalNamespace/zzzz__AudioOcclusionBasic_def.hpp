#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioOcclusionBasic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioOcclusionBase_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioOcclusionBasic)
namespace GlobalNamespace {
class AudioMaterialConfig;
}
namespace GlobalNamespace {
class AudioOcclusionConfig;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
// Forward declare root types
namespace GlobalNamespace {
class AudioOcclusionBasic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioOcclusionBasic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioOcclusionBasic*, "", "AudioOcclusionBasic");
// Dependencies AudioOcclusionBase, UnityEngine.LayerMask, UnityEngine.QueryTriggerInteraction, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioOcclusionBasic
class CORDL_TYPE AudioOcclusionBasic : public ::GlobalNamespace::AudioOcclusionBase {
public:
// Declarations
/// @brief Field Debug, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_Debug, put=__cordl_internal_set_Debug)) bool  Debug;

 __declspec(property(get=get_DetectTrigger)) ::UnityEngine::QueryTriggerInteraction  DetectTrigger;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_Layer)) ::UnityEngine::LayerMask  Layer;

 __declspec(property(get=get_OccLvl, put=set_OccLvl)) float_t  OccLvl;

 __declspec(property(get=get_OutOfRange)) bool  OutOfRange;

 __declspec(property(get=get_VoiceBlockingLvl, put=set_VoiceBlockingLvl)) float_t  VoiceBlockingLvl;

/// @brief Field <OccLvl>k__BackingField, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__OccLvl_k__BackingField, put=__cordl_internal_set__OccLvl_k__BackingField)) float_t  _OccLvl_k__BackingField;

/// @brief Field <VoiceBlockingLvl>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__VoiceBlockingLvl_k__BackingField, put=__cordl_internal_set__VoiceBlockingLvl_k__BackingField)) float_t  _VoiceBlockingLvl_k__BackingField;

/// @brief Field _currentOccLvl, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentOccLvl, put=__cordl_internal_set__currentOccLvl)) float_t  _currentOccLvl;

/// @brief Field _currentVoiceBlockLevel, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentVoiceBlockLevel, put=__cordl_internal_set__currentVoiceBlockLevel)) int32_t  _currentVoiceBlockLevel;

/// @brief Field _detectTrigger, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__detectTrigger, put=__cordl_internal_set__detectTrigger)) ::UnityEngine::QueryTriggerInteraction  _detectTrigger;

/// @brief Field _hasHit, offset 0x37, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasHit, put=__cordl_internal_set__hasHit)) bool  _hasHit;

/// @brief Field _hitCenterInfo, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__hitCenterInfo, put=__cordl_internal_set__hitCenterInfo)) ::ArrayW<::UnityEngine::RaycastHit>  _hitCenterInfo;

/// @brief Field _initialized, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__initialized, put=__cordl_internal_set__initialized)) bool  _initialized;

/// @brief Field _isAsync, offset 0x36, size 0x1 
 __declspec(property(get=__cordl_internal_get__isAsync, put=__cordl_internal_set__isAsync)) bool  _isAsync;

/// @brief Field _lastRaycastDirection, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastRaycastDirection, put=__cordl_internal_set__lastRaycastDirection)) ::UnityEngine::Vector3  _lastRaycastDirection;

/// @brief Field _layer, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__layer, put=__cordl_internal_set__layer)) ::UnityEngine::LayerMask  _layer;

/// @brief Field _materialConfig, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialConfig, put=__cordl_internal_set__materialConfig)) ::UnityW<::GlobalNamespace::AudioMaterialConfig>  _materialConfig;

/// @brief Field _maxDistance, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDistance, put=__cordl_internal_set__maxDistance)) float_t  _maxDistance;

/// @brief Field _maxDistanceSquared, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDistanceSquared, put=__cordl_internal_set__maxDistanceSquared)) float_t  _maxDistanceSquared;

/// @brief Field _outOfRange, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get__outOfRange, put=__cordl_internal_set__outOfRange)) bool  _outOfRange;

/// @brief Field _voiceBlockingMaterials, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceBlockingMaterials, put=__cordl_internal_set__voiceBlockingMaterials)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  _voiceBlockingMaterials;

/// @brief Method ApplyAsyncRaycastResult, addr 0x180483540, size 0x1a0, virtual false, abstract: false, final false
inline void ApplyAsyncRaycastResult(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  results, int32_t  startIndex, int32_t  count) ;

/// @brief Method CalculateOcclusion, addr 0x1804836e0, size 0x570, virtual false, abstract: false, final false
inline void CalculateOcclusion(bool  lerp) ;

/// @brief Method Initialize, addr 0x180483c50, size 0x170, virtual true, abstract: false, final false
inline void Initialize(::GlobalNamespace::AudioOcclusionConfig*  config) ;

static inline ::GlobalNamespace::AudioOcclusionBasic* New_ctor() ;

/// @brief Method ProcessAsyncRaycastResults, addr 0x180483dc0, size 0x1a0, virtual false, abstract: false, final false
inline void ProcessAsyncRaycastResults(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  results, int32_t  startIndex, int32_t  count) ;

/// @brief Method ProcessSyncRaycastResults, addr 0x180483f60, size 0x160, virtual false, abstract: false, final false
inline void ProcessSyncRaycastResults(int32_t  hitDirectCount) ;

/// @brief Method SetAsync, addr 0x1804840c0, size 0x10, virtual false, abstract: false, final false
inline void SetAsync(bool  isAsync) ;

/// @brief Method UpdateOcclusion, addr 0x180484240, size 0xc0, virtual true, abstract: false, final false
inline void UpdateOcclusion() ;

/// @brief Method UpdateOcclusionValues, addr 0x1804840d0, size 0x170, virtual false, abstract: false, final false
inline void UpdateOcclusionValues(bool  lerp) ;

constexpr bool const& __cordl_internal_get_Debug() const;

constexpr bool& __cordl_internal_get_Debug() ;

constexpr float_t const& __cordl_internal_get__OccLvl_k__BackingField() const;

constexpr float_t& __cordl_internal_get__OccLvl_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__VoiceBlockingLvl_k__BackingField() const;

constexpr float_t& __cordl_internal_get__VoiceBlockingLvl_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__currentOccLvl() const;

constexpr float_t& __cordl_internal_get__currentOccLvl() ;

constexpr int32_t const& __cordl_internal_get__currentVoiceBlockLevel() const;

constexpr int32_t& __cordl_internal_get__currentVoiceBlockLevel() ;

constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get__detectTrigger() const;

constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get__detectTrigger() ;

constexpr bool const& __cordl_internal_get__hasHit() const;

constexpr bool& __cordl_internal_get__hasHit() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get__hitCenterInfo() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get__hitCenterInfo() ;

constexpr bool const& __cordl_internal_get__initialized() const;

constexpr bool& __cordl_internal_get__initialized() ;

constexpr bool const& __cordl_internal_get__isAsync() const;

constexpr bool& __cordl_internal_get__isAsync() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastRaycastDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastRaycastDirection() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__layer() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__layer() ;

constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig> const& __cordl_internal_get__materialConfig() const;

constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig>& __cordl_internal_get__materialConfig() ;

constexpr float_t const& __cordl_internal_get__maxDistance() const;

constexpr float_t& __cordl_internal_get__maxDistance() ;

constexpr float_t const& __cordl_internal_get__maxDistanceSquared() const;

constexpr float_t& __cordl_internal_get__maxDistanceSquared() ;

constexpr bool const& __cordl_internal_get__outOfRange() const;

constexpr bool& __cordl_internal_get__outOfRange() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>* const& __cordl_internal_get__voiceBlockingMaterials() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*& __cordl_internal_get__voiceBlockingMaterials() ;

constexpr void __cordl_internal_set_Debug(bool  value) ;

constexpr void __cordl_internal_set__OccLvl_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__VoiceBlockingLvl_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__currentOccLvl(float_t  value) ;

constexpr void __cordl_internal_set__currentVoiceBlockLevel(int32_t  value) ;

constexpr void __cordl_internal_set__detectTrigger(::UnityEngine::QueryTriggerInteraction  value) ;

constexpr void __cordl_internal_set__hasHit(bool  value) ;

constexpr void __cordl_internal_set__hitCenterInfo(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__isAsync(bool  value) ;

constexpr void __cordl_internal_set__lastRaycastDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__layer(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__materialConfig(::UnityW<::GlobalNamespace::AudioMaterialConfig>  value) ;

constexpr void __cordl_internal_set__maxDistance(float_t  value) ;

constexpr void __cordl_internal_set__maxDistanceSquared(float_t  value) ;

constexpr void __cordl_internal_set__outOfRange(bool  value) ;

constexpr void __cordl_internal_set__voiceBlockingMaterials(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DetectTrigger, addr 0x1802e2ba0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::QueryTriggerInteraction get_DetectTrigger() ;

/// @brief Method get_Initialized, addr 0x1803e0b00, size 0x10, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_Layer, addr 0x1803914b0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_Layer() ;

/// @brief Method get_OccLvl, addr 0x18046fae0, size 0x10, virtual true, abstract: false, final false
inline float_t get_OccLvl() ;

/// @brief Method get_OutOfRange, addr 0x1803e0b20, size 0x10, virtual false, abstract: false, final false
inline bool get_OutOfRange() ;

/// @brief Method get_VoiceBlockingLvl, addr 0x18046fad0, size 0x10, virtual true, abstract: false, final false
inline float_t get_VoiceBlockingLvl() ;

/// @brief Method set_OccLvl, addr 0x18046fb20, size 0x10, virtual true, abstract: false, final false
inline void set_OccLvl(float_t  value) ;

/// @brief Method set_VoiceBlockingLvl, addr 0x18046fb10, size 0x10, virtual true, abstract: false, final false
inline void set_VoiceBlockingLvl(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioOcclusionBasic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioOcclusionBasic", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioOcclusionBasic(AudioOcclusionBasic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioOcclusionBasic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioOcclusionBasic(AudioOcclusionBasic const& ) = delete;

/// @brief Field LERP_SPEED offset 0xffffffff size 0x4
static constexpr float_t  LERP_SPEED{static_cast<float_t>(10.0f)};

/// @brief Field RaycastHitCount offset 0xffffffff size 0x4
static constexpr int32_t  RaycastHitCount{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17536};

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

/// @brief Field _isAsync, offset: 0x36, size: 0x1, def value: None
 bool  ____isAsync;

/// @brief Field _hasHit, offset: 0x37, size: 0x1, def value: None
 bool  ____hasHit;

/// @brief Field _currentOccLvl, offset: 0x38, size: 0x4, def value: None
 float_t  ____currentOccLvl;

/// @brief Field _lastRaycastDirection, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastRaycastDirection;

/// @brief Field _maxDistance, offset: 0x48, size: 0x4, def value: None
 float_t  ____maxDistance;

/// @brief Field _maxDistanceSquared, offset: 0x4c, size: 0x4, def value: None
 float_t  ____maxDistanceSquared;

/// @brief Field _hitCenterInfo, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ____hitCenterInfo;

/// @brief Field _materialConfig, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioMaterialConfig>  ____materialConfig;

/// @brief Field <OccLvl>k__BackingField, offset: 0x60, size: 0x4, def value: None
 float_t  ____OccLvl_k__BackingField;

/// @brief Field <VoiceBlockingLvl>k__BackingField, offset: 0x64, size: 0x4, def value: None
 float_t  ____VoiceBlockingLvl_k__BackingField;

/// @brief Field _voiceBlockingMaterials, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  ____voiceBlockingMaterials;

/// @brief Field _currentVoiceBlockLevel, offset: 0x70, size: 0x4, def value: None
 int32_t  ____currentVoiceBlockLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ___Debug) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____layer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____detectTrigger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____initialized) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____outOfRange) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____isAsync) == 0x36, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____hasHit) == 0x37, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____currentOccLvl) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____lastRaycastDirection) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____maxDistance) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____maxDistanceSquared) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____hitCenterInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____materialConfig) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____OccLvl_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____VoiceBlockingLvl_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____voiceBlockingMaterials) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioOcclusionBasic, ____currentVoiceBlockLevel) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioOcclusionBasic) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
