#pragma once
// IWYU pragma private; include "GlobalNamespace/SpeechlessTextOcclusion.hpp"
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
CORDL_MODULE_EXPORT(SpeechlessTextOcclusion)
namespace GlobalNamespace {
class AudioMaterialConfig;
}
namespace GlobalNamespace {
class AudioOcclusionConfig;
}
namespace GlobalNamespace {
class FixedSizeFloatQueue;
}
namespace UnityEngine {
struct LayerMask;
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
class SpeechlessTextOcclusion;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpeechlessTextOcclusion*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpeechlessTextOcclusion*, "", "SpeechlessTextOcclusion");
// Dependencies AudioOcclusionBase, UnityEngine.LayerMask, UnityEngine.QueryTriggerInteraction, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpeechlessTextOcclusion
class CORDL_TYPE SpeechlessTextOcclusion : public ::GlobalNamespace::AudioOcclusionBase {
public:
// Declarations
/// @brief Field Debug, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_Debug, put=__cordl_internal_set_Debug)) bool  Debug;

 __declspec(property(get=get_DetectTrigger)) ::UnityEngine::QueryTriggerInteraction  DetectTrigger;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_Layer)) ::UnityEngine::LayerMask  Layer;

 __declspec(property(get=get_OccLvl, put=set_OccLvl)) float_t  OccLvl;

 __declspec(property(get=get_OutOfRange)) bool  OutOfRange;

 __declspec(property(get=get_RandomPointsForward, put=set_RandomPointsForward)) ::UnityEngine::Vector3  RandomPointsForward;

 __declspec(property(get=get_VoiceBlockingLvl, put=set_VoiceBlockingLvl)) float_t  VoiceBlockingLvl;

/// @brief Field <OccLvl>k__BackingField, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__OccLvl_k__BackingField, put=__cordl_internal_set__OccLvl_k__BackingField)) float_t  _OccLvl_k__BackingField;

/// @brief Field <RandomPointsForward>k__BackingField, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get__RandomPointsForward_k__BackingField, put=__cordl_internal_set__RandomPointsForward_k__BackingField)) ::UnityEngine::Vector3  _RandomPointsForward_k__BackingField;

/// @brief Field _avg, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__avg, put=__cordl_internal_set__avg)) float_t  _avg;

/// @brief Field _collideInfo, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__collideInfo, put=__cordl_internal_set__collideInfo)) ::GlobalNamespace::FixedSizeFloatQueue*  _collideInfo;

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

/// @brief Field _updateRate, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__updateRate, put=__cordl_internal_set__updateRate)) int32_t  _updateRate;

/// @brief Method CalculateOcclusion, addr 0x1803df8f0, size 0xd10, virtual false, abstract: false, final false
inline void CalculateOcclusion() ;

/// @brief Method ComparingHitMaterial, addr 0x1803e0600, size 0x80, virtual false, abstract: false, final false
inline bool ComparingHitMaterial(::UnityEngine::RaycastHit  hit) ;

/// @brief Method Initialize, addr 0x1803e0680, size 0x320, virtual true, abstract: false, final false
inline void Initialize(::GlobalNamespace::AudioOcclusionConfig*  config) ;

static inline ::GlobalNamespace::SpeechlessTextOcclusion* New_ctor() ;

/// @brief Method UpdateOcclusion, addr 0x1803e09a0, size 0x140, virtual true, abstract: false, final false
inline void UpdateOcclusion() ;

constexpr bool const& __cordl_internal_get_Debug() const;

constexpr bool& __cordl_internal_get_Debug() ;

constexpr float_t const& __cordl_internal_get__OccLvl_k__BackingField() const;

constexpr float_t& __cordl_internal_get__OccLvl_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__RandomPointsForward_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__RandomPointsForward_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__avg() const;

constexpr float_t& __cordl_internal_get__avg() ;

constexpr ::GlobalNamespace::FixedSizeFloatQueue* const& __cordl_internal_get__collideInfo() const;

constexpr ::GlobalNamespace::FixedSizeFloatQueue*& __cordl_internal_get__collideInfo() ;

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

constexpr int32_t const& __cordl_internal_get__updateRate() const;

constexpr int32_t& __cordl_internal_get__updateRate() ;

constexpr void __cordl_internal_set_Debug(bool  value) ;

constexpr void __cordl_internal_set__OccLvl_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__RandomPointsForward_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__avg(float_t  value) ;

constexpr void __cordl_internal_set__collideInfo(::GlobalNamespace::FixedSizeFloatQueue*  value) ;

constexpr void __cordl_internal_set__detectTrigger(::UnityEngine::QueryTriggerInteraction  value) ;

constexpr void __cordl_internal_set__hitAroundPlayerInfo(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__hitAroundSourceInfo(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__hitCenterInfo(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__hitRandomPSInfo(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__hitRandomSPInfo(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__initialized(bool  value) ;

constexpr void __cordl_internal_set__layer(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__materialConfig(::UnityW<::GlobalNamespace::AudioMaterialConfig>  value) ;

constexpr void __cordl_internal_set__maxDistance(float_t  value) ;

constexpr void __cordl_internal_set__maxDistanceSquared(float_t  value) ;

constexpr void __cordl_internal_set__minDistance(float_t  value) ;

constexpr void __cordl_internal_set__outOfRange(bool  value) ;

constexpr void __cordl_internal_set__updateRate(int32_t  value) ;

/// @brief Method .ctor, addr 0x1803e0ae0, size 0x20, virtual false, abstract: false, final false
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

/// @brief Method get_RandomPointsForward, addr 0x1803e0b30, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_RandomPointsForward() ;

/// @brief Method get_VoiceBlockingLvl, addr 0x1803e0b50, size 0x10, virtual true, abstract: false, final false
inline float_t get_VoiceBlockingLvl() ;

/// @brief Method set_OccLvl, addr 0x1803e0b60, size 0x10, virtual true, abstract: false, final false
inline void set_OccLvl(float_t  value) ;

/// @brief Method set_RandomPointsForward, addr 0x1803e0b70, size 0x20, virtual false, abstract: false, final false
inline void set_RandomPointsForward(::UnityEngine::Vector3  value) ;

/// @brief Method set_VoiceBlockingLvl, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void set_VoiceBlockingLvl(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpeechlessTextOcclusion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpeechlessTextOcclusion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpeechlessTextOcclusion(SpeechlessTextOcclusion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpeechlessTextOcclusion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpeechlessTextOcclusion(SpeechlessTextOcclusion const& ) = delete;

/// @brief Field LERP_SPEED offset 0xffffffff size 0x4
static constexpr float_t  LERP_SPEED{static_cast<float_t>(5.0f)};

/// @brief Field LISTENER_FIELD_SCALER offset 0xffffffff size 0x4
static constexpr float_t  LISTENER_FIELD_SCALER{static_cast<float_t>(5.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4873};

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

/// @brief Field <RandomPointsForward>k__BackingField, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____RandomPointsForward_k__BackingField;

/// @brief Field <OccLvl>k__BackingField, offset: 0x94, size: 0x4, def value: None
 float_t  ____OccLvl_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ___Debug) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____layer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____detectTrigger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____initialized) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____outOfRange) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____collideInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____minDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____maxDistance) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____maxDistanceSquared) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____updateRate) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____avg) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____hitRandomSPInfo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____hitRandomPSInfo) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____hitAroundPlayerInfo) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____hitAroundSourceInfo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____hitCenterInfo) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____materialConfig) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____RandomPointsForward_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeechlessTextOcclusion, ____OccLvl_k__BackingField) == 0x94, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpeechlessTextOcclusion) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
