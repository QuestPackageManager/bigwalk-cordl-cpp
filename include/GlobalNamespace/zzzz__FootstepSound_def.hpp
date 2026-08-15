#pragma once
// IWYU pragma private; include "GlobalNamespace/FootstepSound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__WaterDepthSampleData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FootstepSound)
namespace GlobalNamespace {
class AudioAsset;
}
namespace GlobalNamespace {
class AudioEvent;
}
namespace GlobalNamespace {
class AudioLayerContainer;
}
namespace GlobalNamespace {
struct AudioRTPC_XAxisType;
}
namespace GlobalNamespace {
class AudioRandomContainer;
}
namespace GlobalNamespace {
class AudioSourceController;
}
namespace GlobalNamespace {
struct AudioVolumeStruct;
}
namespace GlobalNamespace {
class AudioVolume;
}
namespace GlobalNamespace {
class BiquadFilters;
}
namespace GlobalNamespace {
class FootstepAudioReferences_FootstepSoundData;
}
namespace GlobalNamespace {
class FootstepAudioReferences_TerrainDetailSoundData;
}
namespace GlobalNamespace {
struct FootstepAudioReferences_VegetationType;
}
namespace GlobalNamespace {
class FootstepAudioReferences;
}
namespace GlobalNamespace {
class FootstepSound_LogCullingGroupComparer;
}
namespace GlobalNamespace {
class IAudioBehaviour;
}
namespace GlobalNamespace {
class IAudioGUI;
}
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace GlobalNamespace {
class VegetationAudioCullingContainer;
}
namespace GlobalNamespace {
class VegetationSoundCullingGroup;
}
namespace GlobalNamespace {
class VolatilityEvaluator;
}
namespace GlobalNamespace {
struct WaterDepthSampleData_GetDepthMode;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
class Action;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class PhysicsMaterial;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
class SampleCollisionHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class FootstepSound;
}
namespace GlobalNamespace {
class FootstepSound_LogCullingGroupComparer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FootstepSound*);
MARK_REF_T(::GlobalNamespace::FootstepSound_LogCullingGroupComparer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FootstepSound*, "", "FootstepSound");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FootstepSound_LogCullingGroupComparer*, "", "FootstepSound/LogCullingGroupComparer");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: FootstepSound/LogCullingGroupComparer
class CORDL_TYPE FootstepSound_LogCullingGroupComparer : public ::System::Object {
public:
// Declarations
/// @brief Field _logDataLookup, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__logDataLookup, put=__cordl_internal_set__logDataLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  _logDataLookup;

/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>*() noexcept;

/// @brief Method Compare, addr 0x1803d4eb0, size 0x90, virtual true, abstract: false, final true
inline int32_t Compare(::GlobalNamespace::VegetationSoundCullingGroup*  x, ::GlobalNamespace::VegetationSoundCullingGroup*  y) ;

static inline ::GlobalNamespace::FootstepSound_LogCullingGroupComparer* New_ctor(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  logDataLookup) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>* const& __cordl_internal_get__logDataLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*& __cordl_internal_get__logDataLookup() ;

constexpr void __cordl_internal_set__logDataLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  logDataLookup) ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::VegetationSoundCullingGroup*>* i___System__Collections__Generic__IComparer_1___GlobalNamespace__VegetationSoundCullingGroup__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FootstepSound_LogCullingGroupComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FootstepSound_LogCullingGroupComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FootstepSound_LogCullingGroupComparer(FootstepSound_LogCullingGroupComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FootstepSound_LogCullingGroupComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FootstepSound_LogCullingGroupComparer(FootstepSound_LogCullingGroupComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4839};

/// @brief Field _logDataLookup, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::GlobalNamespace::FootstepAudioReferences_TerrainDetailSoundData*>*  ____logDataLookup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FootstepSound_LogCullingGroupComparer, ____logDataLookup) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FootstepSound_LogCullingGroupComparer) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.Collider, UnityEngine.MonoBehaviour, UnityEngine.Vector3, WaterDepthSampleData::GetDepthMode
namespace GlobalNamespace {
// Is value type: false
// CS Name: FootstepSound
class CORDL_TYPE FootstepSound : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LogCullingGroupComparer = ::GlobalNamespace::FootstepSound_LogCullingGroupComparer;

/// @brief Field AssetReferences, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_AssetReferences, put=__cordl_internal_set_AssetReferences)) ::UnityW<::GlobalNamespace::FootstepAudioReferences>  AssetReferences;

/// @brief Field Bob, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Bob, put=__cordl_internal_set_Bob)) ::UnityW<::UnityEngine::Transform>  Bob;

/// @brief Field Bum, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Bum, put=__cordl_internal_set_Bum)) ::UnityW<::UnityEngine::Transform>  Bum;

 __declspec(property(get=get_CanSlide)) bool  CanSlide;

 __declspec(property(get=get_GUIDebugMode, put=set_GUIDebugMode)) bool  GUIDebugMode;

 __declspec(property(get=get_Identifier)) ::StringW  Identifier;

 __declspec(property(get=get_InWater)) bool  InWater;

 __declspec(property(get=get_IndoornessVol)) ::GlobalNamespace::AudioVolume*  IndoornessVol;

 __declspec(property(get=get_IndoornessVolStruct)) ::GlobalNamespace::AudioVolumeStruct  IndoornessVolStruct;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_IsGrounded)) bool  IsGrounded;

 __declspec(property(get=get_LastHitCollider, put=set_LastHitCollider)) ::UnityW<::UnityEngine::Collider>  LastHitCollider;

/// @brief Field LeftFoot, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_LeftFoot, put=__cordl_internal_set_LeftFoot)) ::UnityW<::UnityEngine::Transform>  LeftFoot;

/// @brief Field LeftHand, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_LeftHand, put=__cordl_internal_set_LeftHand)) ::UnityW<::UnityEngine::Transform>  LeftHand;

/// @brief Field OnJump, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnJump, put=__cordl_internal_set_OnJump)) ::System::Action*  OnJump;

/// @brief Field OnLand, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLand, put=__cordl_internal_set_OnLand)) ::System::Action*  OnLand;

/// @brief Field OnSit, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSit, put=__cordl_internal_set_OnSit)) ::System::Action*  OnSit;

/// @brief Field OnStand, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStand, put=__cordl_internal_set_OnStand)) ::System::Action*  OnStand;

/// @brief Field PlayerCharacter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayerCharacter, put=__cordl_internal_set_PlayerCharacter)) ::UnityW<::GlobalNamespace::PlayerCharacter>  PlayerCharacter;

/// @brief Field RightFoot, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_RightFoot, put=__cordl_internal_set_RightFoot)) ::UnityW<::UnityEngine::Transform>  RightFoot;

/// @brief Field RightHand, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_RightHand, put=__cordl_internal_set_RightHand)) ::UnityW<::UnityEngine::Transform>  RightHand;

/// @brief Field Root, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Root, put=__cordl_internal_set_Root)) ::UnityW<::UnityEngine::Transform>  Root;

/// @brief Field RootWorldPos, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_RootWorldPos, put=__cordl_internal_set_RootWorldPos)) ::UnityEngine::Vector3  RootWorldPos;

 __declspec(property(get=get_WaterFoleyFadeVol, put=set_WaterFoleyFadeVol)) ::GlobalNamespace::AudioVolume*  WaterFoleyFadeVol;

 __declspec(property(get=get_WaterFoleyFadeVolStruct)) ::GlobalNamespace::AudioVolumeStruct  WaterFoleyFadeVolStruct;

 __declspec(property(get=get_WaterFootstepFadeVol, put=set_WaterFootstepFadeVol)) ::GlobalNamespace::AudioVolume*  WaterFootstepFadeVol;

 __declspec(property(get=get_WaterFootstepFadeVolStruct)) ::GlobalNamespace::AudioVolumeStruct  WaterFootstepFadeVolStruct;

 __declspec(property(get=get_WaterIntensityVol, put=set_WaterIntensityVol)) ::GlobalNamespace::AudioVolume*  WaterIntensityVol;

 __declspec(property(get=get_WaterMoveLeftVol, put=set_WaterMoveLeftVol)) ::GlobalNamespace::AudioVolume*  WaterMoveLeftVol;

 __declspec(property(get=get_WaterMoveRightVol, put=set_WaterMoveRightVol)) ::GlobalNamespace::AudioVolume*  WaterMoveRightVol;

 __declspec(property(get=get_WaterVolRealtime, put=set_WaterVolRealtime)) ::GlobalNamespace::AudioVolume*  WaterVolRealtime;

 __declspec(property(get=get_WaterVolStruct)) ::GlobalNamespace::AudioVolumeStruct  WaterVolStruct;

/// @brief Field _1stProportion, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__1stProportion, put=__cordl_internal_set__1stProportion)) float_t  _1stProportion;

/// @brief Field _1stSlidingEvent, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__1stSlidingEvent, put=__cordl_internal_set__1stSlidingEvent)) ::GlobalNamespace::AudioEvent*  _1stSlidingEvent;

/// @brief Field _1stSlidingVolume, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__1stSlidingVolume, put=__cordl_internal_set__1stSlidingVolume)) ::GlobalNamespace::AudioVolume*  _1stSlidingVolume;

/// @brief Field _1stSoundSet, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__1stSoundSet, put=__cordl_internal_set__1stSoundSet)) ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  _1stSoundSet;

/// @brief Field _2ndProportion, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__2ndProportion, put=__cordl_internal_set__2ndProportion)) float_t  _2ndProportion;

/// @brief Field _2ndSlidingEvent, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__2ndSlidingEvent, put=__cordl_internal_set__2ndSlidingEvent)) ::GlobalNamespace::AudioEvent*  _2ndSlidingEvent;

/// @brief Field _2ndSlidingVolume, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__2ndSlidingVolume, put=__cordl_internal_set__2ndSlidingVolume)) ::GlobalNamespace::AudioVolume*  _2ndSlidingVolume;

/// @brief Field _2ndSoundSet, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__2ndSoundSet, put=__cordl_internal_set__2ndSoundSet)) ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  _2ndSoundSet;

/// @brief Field <DepthMode>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DepthMode_k__BackingField, put=setStaticF__DepthMode_k__BackingField)) ::GlobalNamespace::WaterDepthSampleData_GetDepthMode  _DepthMode_k__BackingField;

/// @brief Field <LastHitCollider>k__BackingField, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__LastHitCollider_k__BackingField, put=__cordl_internal_set__LastHitCollider_k__BackingField)) ::UnityW<::UnityEngine::Collider>  _LastHitCollider_k__BackingField;

/// @brief Field <LocalPlayerHeightOffTerrainAvg>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LocalPlayerHeightOffTerrainAvg_k__BackingField, put=setStaticF__LocalPlayerHeightOffTerrainAvg_k__BackingField)) float_t  _LocalPlayerHeightOffTerrainAvg_k__BackingField;

/// @brief Field <LocalPlayerHeightOffTerrain>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LocalPlayerHeightOffTerrain_k__BackingField, put=setStaticF__LocalPlayerHeightOffTerrain_k__BackingField)) float_t  _LocalPlayerHeightOffTerrain_k__BackingField;

/// @brief Field <LocalStreamTexture>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__LocalStreamTexture_k__BackingField, put=setStaticF__LocalStreamTexture_k__BackingField)) ::UnityW<::UnityEngine::Texture2D>  _LocalStreamTexture_k__BackingField;

/// @brief Field <LocalTerrain>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__LocalTerrain_k__BackingField, put=setStaticF__LocalTerrain_k__BackingField)) ::UnityW<::UnityEngine::Terrain>  _LocalTerrain_k__BackingField;

/// @brief Field <RealTreeIntensity>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RealTreeIntensity_k__BackingField, put=setStaticF__RealTreeIntensity_k__BackingField)) float_t  _RealTreeIntensity_k__BackingField;

/// @brief Field <WaterFoleyFadeVol>k__BackingField, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get__WaterFoleyFadeVol_k__BackingField, put=__cordl_internal_set__WaterFoleyFadeVol_k__BackingField)) ::GlobalNamespace::AudioVolume*  _WaterFoleyFadeVol_k__BackingField;

/// @brief Field <WaterFootstepFadeVol>k__BackingField, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get__WaterFootstepFadeVol_k__BackingField, put=__cordl_internal_set__WaterFootstepFadeVol_k__BackingField)) ::GlobalNamespace::AudioVolume*  _WaterFootstepFadeVol_k__BackingField;

/// @brief Field <WaterIntensityVol>k__BackingField, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get__WaterIntensityVol_k__BackingField, put=__cordl_internal_set__WaterIntensityVol_k__BackingField)) ::GlobalNamespace::AudioVolume*  _WaterIntensityVol_k__BackingField;

/// @brief Field <WaterMoveLeftVol>k__BackingField, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__WaterMoveLeftVol_k__BackingField, put=__cordl_internal_set__WaterMoveLeftVol_k__BackingField)) ::GlobalNamespace::AudioVolume*  _WaterMoveLeftVol_k__BackingField;

/// @brief Field <WaterMoveRightVol>k__BackingField, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get__WaterMoveRightVol_k__BackingField, put=__cordl_internal_set__WaterMoveRightVol_k__BackingField)) ::GlobalNamespace::AudioVolume*  _WaterMoveRightVol_k__BackingField;

/// @brief Field <WaterVolRealtime>k__BackingField, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__WaterVolRealtime_k__BackingField, put=__cordl_internal_set__WaterVolRealtime_k__BackingField)) ::GlobalNamespace::AudioVolume*  _WaterVolRealtime_k__BackingField;

/// @brief Field <WindyPositions>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__WindyPositions_k__BackingField, put=setStaticF__WindyPositions_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>*  _WindyPositions_k__BackingField;

/// @brief Field <WindyTimeScalerLookup>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__WindyTimeScalerLookup_k__BackingField, put=setStaticF__WindyTimeScalerLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*  _WindyTimeScalerLookup_k__BackingField;

/// @brief Field _cachedSpeed, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedSpeed, put=__cordl_internal_set__cachedSpeed)) float_t  _cachedSpeed;

/// @brief Field _cachedStreamTexture, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedStreamTexture, put=__cordl_internal_set__cachedStreamTexture)) ::UnityW<::UnityEngine::Texture2D>  _cachedStreamTexture;

/// @brief Field _cachedTerrain, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedTerrain, put=__cordl_internal_set__cachedTerrain)) ::UnityW<::UnityEngine::Terrain>  _cachedTerrain;

/// @brief Field _capsuleCastResults, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__capsuleCastResults, put=__cordl_internal_set__capsuleCastResults)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _capsuleCastResults;

/// @brief Field _crouchVol, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__crouchVol, put=__cordl_internal_set__crouchVol)) ::GlobalNamespace::AudioVolume*  _crouchVol;

/// @brief Field _currentDetailObj, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentDetailObj, put=__cordl_internal_set__currentDetailObj)) ::UnityW<::UnityEngine::GameObject>  _currentDetailObj;

/// @brief Field _currentDetailSound, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentDetailSound, put=__cordl_internal_set__currentDetailSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  _currentDetailSound;

/// @brief Field _currentLogObj, offset 0x260, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentLogObj, put=__cordl_internal_set__currentLogObj)) ::UnityW<::UnityEngine::GameObject>  _currentLogObj;

/// @brief Field _currentTreeObj, offset 0x258, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentTreeObj, put=__cordl_internal_set__currentTreeObj)) ::UnityW<::UnityEngine::GameObject>  _currentTreeObj;

/// @brief Field _currentTreeSound, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentTreeSound, put=__cordl_internal_set__currentTreeSound)) ::UnityW<::GlobalNamespace::AudioRandomContainer>  _currentTreeSound;

/// @brief Field _debugLogReady, offset 0x268, size 0x1 
 __declspec(property(get=__cordl_internal_get__debugLogReady, put=__cordl_internal_set__debugLogReady)) bool  _debugLogReady;

/// @brief Field _detailAudioCullingContainer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__detailAudioCullingContainer, put=setStaticF__detailAudioCullingContainer)) ::GlobalNamespace::VegetationAudioCullingContainer*  _detailAudioCullingContainer;

/// @brief Field _grounded, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__grounded, put=__cordl_internal_set__grounded)) bool  _grounded;

/// @brief Field _guiDebugLog, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get__guiDebugLog, put=__cordl_internal_set__guiDebugLog)) ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*  _guiDebugLog;

/// @brief Field _guiDebugTextStyle, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get__guiDebugTextStyle, put=__cordl_internal_set__guiDebugTextStyle)) ::UnityEngine::GUIStyle*  _guiDebugTextStyle;

/// @brief Field _hitSphereCount, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get__hitSphereCount, put=__cordl_internal_set__hitSphereCount)) int32_t  _hitSphereCount;

/// @brief Field _inAir, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__inAir, put=__cordl_internal_set__inAir)) bool  _inAir;

/// @brief Field _inMicroSplatWater, offset 0x180, size 0x1 
 __declspec(property(get=__cordl_internal_get__inMicroSplatWater, put=__cordl_internal_set__inMicroSplatWater)) bool  _inMicroSplatWater;

/// @brief Field _indoornessVol, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__indoornessVol, put=__cordl_internal_set__indoornessVol)) ::GlobalNamespace::AudioVolume*  _indoornessVol;

/// @brief Field _landing, offset 0x89, size 0x1 
 __declspec(property(get=__cordl_internal_get__landing, put=__cordl_internal_set__landing)) bool  _landing;

/// @brief Field _lastHitMaterial, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastHitMaterial, put=__cordl_internal_set__lastHitMaterial)) ::UnityW<::UnityEngine::PhysicsMaterial>  _lastHitMaterial;

/// @brief Field _lastLeftMax, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastLeftMax, put=__cordl_internal_set__lastLeftMax)) float_t  _lastLeftMax;

/// @brief Field _lastRightMax, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastRightMax, put=__cordl_internal_set__lastRightMax)) float_t  _lastRightMax;

/// @brief Field _lastRootWorldPos, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastRootWorldPos, put=__cordl_internal_set__lastRootWorldPos)) ::UnityEngine::Vector3  _lastRootWorldPos;

/// @brief Field _lastRustlePlayTime, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastRustlePlayTime, put=__cordl_internal_set__lastRustlePlayTime)) float_t  _lastRustlePlayTime;

/// @brief Field _lastSlideLandTime, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastSlideLandTime, put=__cordl_internal_set__lastSlideLandTime)) float_t  _lastSlideLandTime;

/// @brief Field _lastSlideStartTime, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastSlideStartTime, put=__cordl_internal_set__lastSlideStartTime)) float_t  _lastSlideStartTime;

/// @brief Field _lastSlideStopTime, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastSlideStopTime, put=__cordl_internal_set__lastSlideStopTime)) float_t  _lastSlideStopTime;

/// @brief Field _leftDepth, offset 0x204, size 0x4 
 __declspec(property(get=__cordl_internal_get__leftDepth, put=__cordl_internal_set__leftDepth)) float_t  _leftDepth;

/// @brief Field _leftHandFilter, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHandFilter, put=__cordl_internal_set__leftHandFilter)) ::UnityW<::GlobalNamespace::BiquadFilters>  _leftHandFilter;

/// @brief Field _leftHandVelocity, offset 0x1fc, size 0x4 
 __declspec(property(get=__cordl_internal_get__leftHandVelocity, put=__cordl_internal_set__leftHandVelocity)) float_t  _leftHandVelocity;

/// @brief Field _logAudioCullingContainer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__logAudioCullingContainer, put=setStaticF__logAudioCullingContainer)) ::GlobalNamespace::VegetationAudioCullingContainer*  _logAudioCullingContainer;

/// @brief Field _movingVelocity, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__movingVelocity, put=__cordl_internal_set__movingVelocity)) float_t  _movingVelocity;

/// @brief Field _playingDetailSounds, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get__playingDetailSounds, put=__cordl_internal_set__playingDetailSounds)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  _playingDetailSounds;

/// @brief Field _playingTreeSounds, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get__playingTreeSounds, put=__cordl_internal_set__playingTreeSounds)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  _playingTreeSounds;

/// @brief Field _propLayer, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__propLayer, put=__cordl_internal_set__propLayer)) ::UnityW<::GlobalNamespace::AudioAsset>  _propLayer;

/// @brief Field _remotePlayers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__remotePlayers, put=setStaticF__remotePlayers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*  _remotePlayers;

/// @brief Field _rightDepth, offset 0x208, size 0x4 
 __declspec(property(get=__cordl_internal_get__rightDepth, put=__cordl_internal_set__rightDepth)) float_t  _rightDepth;

/// @brief Field _rightHandFilter, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHandFilter, put=__cordl_internal_set__rightHandFilter)) ::UnityW<::GlobalNamespace::BiquadFilters>  _rightHandFilter;

/// @brief Field _rightHandVelocity, offset 0x200, size 0x4 
 __declspec(property(get=__cordl_internal_get__rightHandVelocity, put=__cordl_internal_set__rightHandVelocity)) float_t  _rightHandVelocity;

/// @brief Field _sampleHeightHelper, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__sampleHeightHelper, put=__cordl_internal_set__sampleHeightHelper)) ::WaveHarmonic::Crest::SampleCollisionHelper*  _sampleHeightHelper;

/// @brief Field _sitting, offset 0x8a, size 0x1 
 __declspec(property(get=__cordl_internal_get__sitting, put=__cordl_internal_set__sitting)) bool  _sitting;

/// @brief Field _slidingEventLookup, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__slidingEventLookup, put=__cordl_internal_set__slidingEventLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioLayerContainer>,::GlobalNamespace::AudioEvent*>*  _slidingEventLookup;

/// @brief Field _sphereCastResults, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__sphereCastResults, put=__cordl_internal_set__sphereCastResults)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _sphereCastResults;

/// @brief Field _squeakySandSwitch, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__squeakySandSwitch, put=__cordl_internal_set__squeakySandSwitch)) int32_t  _squeakySandSwitch;

/// @brief Field _standing, offset 0x8b, size 0x1 
 __declspec(property(get=__cordl_internal_get__standing, put=__cordl_internal_set__standing)) bool  _standing;

/// @brief Field _swimLeftHandUp, offset 0x1f8, size 0x1 
 __declspec(property(get=__cordl_internal_get__swimLeftHandUp, put=__cordl_internal_set__swimLeftHandUp)) bool  _swimLeftHandUp;

/// @brief Field _swimRightHandUp, offset 0x1f9, size 0x1 
 __declspec(property(get=__cordl_internal_get__swimRightHandUp, put=__cordl_internal_set__swimRightHandUp)) bool  _swimRightHandUp;

/// @brief Field _treeAudioCullingContainer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__treeAudioCullingContainer, put=setStaticF__treeAudioCullingContainer)) ::GlobalNamespace::VegetationAudioCullingContainer*  _treeAudioCullingContainer;

/// @brief Field _volatilityEvaluator, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__volatilityEvaluator, put=__cordl_internal_set__volatilityEvaluator)) ::GlobalNamespace::VolatilityEvaluator*  _volatilityEvaluator;

/// @brief Field _wasWalkingOrRunning, offset 0x8d, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasWalkingOrRunning, put=__cordl_internal_set__wasWalkingOrRunning)) bool  _wasWalkingOrRunning;

/// @brief Field _waterBobASC, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__waterBobASC, put=__cordl_internal_set__waterBobASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _waterBobASC;

/// @brief Field _waterDepth, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get__waterDepth, put=__cordl_internal_set__waterDepth)) float_t  _waterDepth;

/// @brief Field _waterIntensity, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get__waterIntensity, put=__cordl_internal_set__waterIntensity)) float_t  _waterIntensity;

/// @brief Field _waterJumpEvent, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__waterJumpEvent, put=__cordl_internal_set__waterJumpEvent)) ::GlobalNamespace::AudioEvent*  _waterJumpEvent;

/// @brief Field _waterLandEvent, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__waterLandEvent, put=__cordl_internal_set__waterLandEvent)) ::GlobalNamespace::AudioEvent*  _waterLandEvent;

/// @brief Field _waterMoveCenterASC, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get__waterMoveCenterASC, put=__cordl_internal_set__waterMoveCenterASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _waterMoveCenterASC;

/// @brief Field _waterMoveLeftASC, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get__waterMoveLeftASC, put=__cordl_internal_set__waterMoveLeftASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _waterMoveLeftASC;

/// @brief Field _waterMoveRightASC, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get__waterMoveRightASC, put=__cordl_internal_set__waterMoveRightASC)) ::UnityW<::GlobalNamespace::AudioSourceController>  _waterMoveRightASC;

/// @brief Field _waterRunEvent, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get__waterRunEvent, put=__cordl_internal_set__waterRunEvent)) ::GlobalNamespace::AudioEvent*  _waterRunEvent;

/// @brief Field _waterWalkEvent, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__waterWalkEvent, put=__cordl_internal_set__waterWalkEvent)) ::GlobalNamespace::AudioEvent*  _waterWalkEvent;

/// @brief Field s_detailDensityCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_detailDensityCount, put=setStaticF_s_detailDensityCount)) int32_t  s_detailDensityCount;

/// @brief Field s_treeDensityCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_treeDensityCount, put=setStaticF_s_treeDensityCount)) int32_t  s_treeDensityCount;

/// @brief Field s_treeDensityCountLong, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_treeDensityCountLong, put=setStaticF_s_treeDensityCountLong)) int32_t  s_treeDensityCountLong;

/// @brief Convert operator to "::GlobalNamespace::IAudioBehaviour"
constexpr operator  ::GlobalNamespace::IAudioBehaviour*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IAudioGUI"
constexpr operator  ::GlobalNamespace::IAudioGUI*() noexcept;

/// @brief Method AudioFixedUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioFixedUpdate(float_t  deltaTime) ;

/// @brief Method AudioLateUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioLateUpdate(float_t  deltaTime) ;

/// @brief Method AudioSlowUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioSlowUpdate(float_t  deltaTime) ;

/// @brief Method AudioUpdate, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void AudioUpdate(float_t  deltaTime) ;

/// @brief Method DisposeCullingContainers, addr 0x180337250, size 0xf0, virtual false, abstract: false, final false
inline void DisposeCullingContainers() ;

/// @brief Method DoJump, addr 0x180337340, size 0xc00, virtual false, abstract: false, final false
inline void DoJump() ;

/// @brief Method DoSit, addr 0x180337f40, size 0xd50, virtual false, abstract: false, final false
inline void DoSit() ;

/// @brief Method DoSlide, addr 0x180338c90, size 0x6f0, virtual false, abstract: false, final false
inline void DoSlide() ;

/// @brief Method DoStand, addr 0x180339380, size 0xd70, virtual false, abstract: false, final false
inline void DoStand() ;

/// @brief Method DoWalkRunLand, addr 0x18033a0f0, size 0x1c80, virtual false, abstract: false, final false
inline void DoWalkRunLand() ;

/// @brief Method DrawGUI, addr 0x18033bd70, size 0x570, virtual true, abstract: false, final true
inline void DrawGUI() ;

/// @brief Method GetMovingVelocity, addr 0x18033c2e0, size 0x10, virtual false, abstract: false, final false
inline float_t GetMovingVelocity() ;

/// @brief Method GetWaterIntensity, addr 0x18033c2f0, size 0x20, virtual false, abstract: false, final false
inline float_t GetWaterIntensity() ;

/// @brief Method HitCollidersContain, addr 0x18033c310, size 0xf0, virtual false, abstract: false, final false
inline bool HitCollidersContain(::UnityEngine::Collider*  collider) ;

/// @brief Method InitializeCullingContainers, addr 0x18033c400, size 0x1770, virtual false, abstract: false, final false
inline void InitializeCullingContainers() ;

/// @brief Method LateUpdate, addr 0x18033db70, size 0x200, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::FootstepSound* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18033dd70, size 0x1f0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18033df60, size 0xe0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18033e040, size 0x200, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnQualityLevelChanged, addr 0x18033e240, size 0x110, virtual false, abstract: false, final false
inline void OnQualityLevelChanged(int32_t  qualityLevel) ;

/// @brief Method PlaySlideLandSound, addr 0x18033e350, size 0xc20, virtual false, abstract: false, final false
inline void PlaySlideLandSound(float_t  deltaVel) ;

/// @brief Method PlayTreeAndDetailSound, addr 0x18033ef70, size 0x4d0, virtual false, abstract: false, final false
inline void PlayTreeAndDetailSound() ;

/// @brief Method QueryForDetails, addr 0x18033f440, size 0x190, virtual false, abstract: false, final false
inline bool QueryForDetails() ;

/// @brief Method QueryForLogs, addr 0x18033f5d0, size 0x140, virtual false, abstract: false, final false
inline bool QueryForLogs() ;

/// @brief Method QueryForTrees, addr 0x18033f710, size 0x190, virtual false, abstract: false, final false
inline bool QueryForTrees() ;

/// @brief Method ResetStatic, addr 0x18033f8a0, size 0x70, virtual false, abstract: false, final false
static inline void ResetStatic() ;

/// @brief Method ScheduleJobs, addr 0x18033f910, size 0x220, virtual false, abstract: false, final false
inline void ScheduleJobs() ;

/// @brief Method SlideGetX, addr 0x18033fb30, size 0x40, virtual false, abstract: false, final false
inline bool SlideGetX(::GlobalNamespace::AudioRTPC_XAxisType  type, ::by_ref<float_t>  x) ;

/// @brief Method Start, addr 0x18033fb70, size 0x5d0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StopDetailSounds, addr 0x180340140, size 0xb0, virtual false, abstract: false, final false
inline void StopDetailSounds(float_t  fadeOutOverride) ;

/// @brief Method StopSlideSounds, addr 0x1803401f0, size 0x160, virtual false, abstract: false, final false
inline void StopSlideSounds() ;

/// @brief Method StopTreeSounds, addr 0x180340350, size 0xb0, virtual false, abstract: false, final false
inline void StopTreeSounds(float_t  fadeOutOverride) ;

/// @brief Method TryPlayWaterSoundForKick, addr 0x180340400, size 0x1d0, virtual false, abstract: false, final false
inline void TryPlayWaterSoundForKick() ;

/// @brief Method UpdateFootsteps, addr 0x180340880, size 0x1de0, virtual false, abstract: false, final false
inline void UpdateFootsteps(::by_ref<bool>  newDetail, ::by_ref<bool>  newTree, ::by_ref<bool>  bottomHit) ;

/// @brief Method UpdateSlideVolume, addr 0x180342660, size 0x120, virtual false, abstract: false, final false
inline void UpdateSlideVolume(float_t  deltaTime) ;

/// @brief Method UpdateWaterSounds, addr 0x180342780, size 0x1c20, virtual false, abstract: false, final false
inline void UpdateWaterSounds() ;

/// @brief Method UpdateWaterValues, addr 0x1803443a0, size 0x760, virtual false, abstract: false, final false
inline void UpdateWaterValues() ;

/// @brief Method UpdateWindyPositions, addr 0x180344b00, size 0x4d0, virtual false, abstract: false, final false
inline void UpdateWindyPositions(int32_t  frameCount) ;

/// @brief Method WaterCenterMoveGetX, addr 0x180344fd0, size 0x80, virtual false, abstract: false, final false
inline bool WaterCenterMoveGetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method WaterLeftHandGetX, addr 0x180345050, size 0x60, virtual false, abstract: false, final false
inline bool WaterLeftHandGetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method WaterRightHandGetX, addr 0x1803450b0, size 0x60, virtual false, abstract: false, final false
inline bool WaterRightHandGetX(::GlobalNamespace::AudioRTPC_XAxisType  xType, ::by_ref<float_t>  x) ;

/// @brief Method <DoSit>g___resetSittingFlag|220_0, addr 0x1803405d0, size 0x20, virtual false, abstract: false, final false
static inline void _DoSit_g___resetSittingFlag_220_0(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <DoStand>g___switchStanding|221_0, addr 0x1803405f0, size 0x20, virtual false, abstract: false, final false
static inline void _DoStand_g___switchStanding_221_0(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <DoWalkRunLand>g___resetLandingFlag|218_0, addr 0x180340610, size 0x20, virtual false, abstract: false, final false
static inline void _DoWalkRunLand_g___resetLandingFlag_218_0(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayTreeAndDetailSound>g___clearRef|229_0, addr 0x180340630, size 0x30, virtual false, abstract: false, final false
static inline void _PlayTreeAndDetailSound_g___clearRef_229_0(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <PlayTreeAndDetailSound>g___clearRef|229_1, addr 0x180340660, size 0x30, virtual false, abstract: false, final false
static inline void _PlayTreeAndDetailSound_g___clearRef_229_1(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <UpdateFootsteps>b__211_0, addr 0x180340690, size 0x40, virtual false, abstract: false, final false
inline void _UpdateFootsteps_b__211_0(double_t  t) ;

/// @brief Method <UpdateFootsteps>b__211_1, addr 0x1803406d0, size 0x10, virtual false, abstract: false, final false
inline void _UpdateFootsteps_b__211_1(double_t  t) ;

/// @brief Method <UpdateFootsteps>b__211_2, addr 0x180340690, size 0x40, virtual false, abstract: false, final false
inline void _UpdateFootsteps_b__211_2(double_t  t) ;

/// @brief Method <UpdateFootsteps>b__211_3, addr 0x1803406d0, size 0x10, virtual false, abstract: false, final false
inline void _UpdateFootsteps_b__211_3(double_t  t) ;

/// @brief Method <UpdateWaterSounds>g___clearRef|217_0, addr 0x1803406e0, size 0x60, virtual false, abstract: false, final false
static inline void _UpdateWaterSounds_g___clearRef_217_0(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <UpdateWaterSounds>g___clearRef|217_1, addr 0x180340740, size 0x60, virtual false, abstract: false, final false
static inline void _UpdateWaterSounds_g___clearRef_217_1(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <UpdateWaterSounds>g___clearRef|217_2, addr 0x1803407a0, size 0x70, virtual false, abstract: false, final false
static inline void _UpdateWaterSounds_g___clearRef_217_2(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c) ;

/// @brief Method <UpdateWaterSounds>g___clearRef|217_3, addr 0x180340810, size 0x70, virtual false, abstract: false, final false
static inline void _UpdateWaterSounds_g___clearRef_217_3(::GlobalNamespace::FootstepSound*  f, ::GlobalNamespace::AudioSourceController*  c) ;

constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences> const& __cordl_internal_get_AssetReferences() const;

constexpr ::UnityW<::GlobalNamespace::FootstepAudioReferences>& __cordl_internal_get_AssetReferences() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Bob() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Bob() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Bum() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Bum() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_LeftFoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_LeftFoot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_LeftHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_LeftHand() ;

constexpr ::System::Action* const& __cordl_internal_get_OnJump() const;

constexpr ::System::Action*& __cordl_internal_get_OnJump() ;

constexpr ::System::Action* const& __cordl_internal_get_OnLand() const;

constexpr ::System::Action*& __cordl_internal_get_OnLand() ;

constexpr ::System::Action* const& __cordl_internal_get_OnSit() const;

constexpr ::System::Action*& __cordl_internal_get_OnSit() ;

constexpr ::System::Action* const& __cordl_internal_get_OnStand() const;

constexpr ::System::Action*& __cordl_internal_get_OnStand() ;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter> const& __cordl_internal_get_PlayerCharacter() const;

constexpr ::UnityW<::GlobalNamespace::PlayerCharacter>& __cordl_internal_get_PlayerCharacter() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_RightFoot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_RightFoot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_RightHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_RightHand() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Root() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Root() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_RootWorldPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_RootWorldPos() ;

constexpr float_t const& __cordl_internal_get__1stProportion() const;

constexpr float_t& __cordl_internal_get__1stProportion() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__1stSlidingEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__1stSlidingEvent() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__1stSlidingVolume() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__1stSlidingVolume() ;

constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* const& __cordl_internal_get__1stSoundSet() const;

constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*& __cordl_internal_get__1stSoundSet() ;

constexpr float_t const& __cordl_internal_get__2ndProportion() const;

constexpr float_t& __cordl_internal_get__2ndProportion() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__2ndSlidingEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__2ndSlidingEvent() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__2ndSlidingVolume() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__2ndSlidingVolume() ;

constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData* const& __cordl_internal_get__2ndSoundSet() const;

constexpr ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*& __cordl_internal_get__2ndSoundSet() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__LastHitCollider_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__LastHitCollider_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__WaterFoleyFadeVol_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__WaterFoleyFadeVol_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__WaterFootstepFadeVol_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__WaterFootstepFadeVol_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__WaterIntensityVol_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__WaterIntensityVol_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__WaterMoveLeftVol_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__WaterMoveLeftVol_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__WaterMoveRightVol_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__WaterMoveRightVol_k__BackingField() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__WaterVolRealtime_k__BackingField() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__WaterVolRealtime_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__cachedSpeed() const;

constexpr float_t& __cordl_internal_get__cachedSpeed() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__cachedStreamTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__cachedStreamTexture() ;

constexpr ::UnityW<::UnityEngine::Terrain> const& __cordl_internal_get__cachedTerrain() const;

constexpr ::UnityW<::UnityEngine::Terrain>& __cordl_internal_get__cachedTerrain() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__capsuleCastResults() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__capsuleCastResults() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__crouchVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__crouchVol() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__currentDetailObj() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__currentDetailObj() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get__currentDetailSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get__currentDetailSound() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__currentLogObj() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__currentLogObj() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__currentTreeObj() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__currentTreeObj() ;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer> const& __cordl_internal_get__currentTreeSound() const;

constexpr ::UnityW<::GlobalNamespace::AudioRandomContainer>& __cordl_internal_get__currentTreeSound() ;

constexpr bool const& __cordl_internal_get__debugLogReady() const;

constexpr bool& __cordl_internal_get__debugLogReady() ;

constexpr bool const& __cordl_internal_get__grounded() const;

constexpr bool& __cordl_internal_get__grounded() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>* const& __cordl_internal_get__guiDebugLog() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*& __cordl_internal_get__guiDebugLog() ;

constexpr ::UnityEngine::GUIStyle* const& __cordl_internal_get__guiDebugTextStyle() const;

constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get__guiDebugTextStyle() ;

constexpr int32_t const& __cordl_internal_get__hitSphereCount() const;

constexpr int32_t& __cordl_internal_get__hitSphereCount() ;

constexpr bool const& __cordl_internal_get__inAir() const;

constexpr bool& __cordl_internal_get__inAir() ;

constexpr bool const& __cordl_internal_get__inMicroSplatWater() const;

constexpr bool& __cordl_internal_get__inMicroSplatWater() ;

constexpr ::GlobalNamespace::AudioVolume* const& __cordl_internal_get__indoornessVol() const;

constexpr ::GlobalNamespace::AudioVolume*& __cordl_internal_get__indoornessVol() ;

constexpr bool const& __cordl_internal_get__landing() const;

constexpr bool& __cordl_internal_get__landing() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get__lastHitMaterial() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get__lastHitMaterial() ;

constexpr float_t const& __cordl_internal_get__lastLeftMax() const;

constexpr float_t& __cordl_internal_get__lastLeftMax() ;

constexpr float_t const& __cordl_internal_get__lastRightMax() const;

constexpr float_t& __cordl_internal_get__lastRightMax() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastRootWorldPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastRootWorldPos() ;

constexpr float_t const& __cordl_internal_get__lastRustlePlayTime() const;

constexpr float_t& __cordl_internal_get__lastRustlePlayTime() ;

constexpr float_t const& __cordl_internal_get__lastSlideLandTime() const;

constexpr float_t& __cordl_internal_get__lastSlideLandTime() ;

constexpr float_t const& __cordl_internal_get__lastSlideStartTime() const;

constexpr float_t& __cordl_internal_get__lastSlideStartTime() ;

constexpr float_t const& __cordl_internal_get__lastSlideStopTime() const;

constexpr float_t& __cordl_internal_get__lastSlideStopTime() ;

constexpr float_t const& __cordl_internal_get__leftDepth() const;

constexpr float_t& __cordl_internal_get__leftDepth() ;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& __cordl_internal_get__leftHandFilter() const;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& __cordl_internal_get__leftHandFilter() ;

constexpr float_t const& __cordl_internal_get__leftHandVelocity() const;

constexpr float_t& __cordl_internal_get__leftHandVelocity() ;

constexpr float_t const& __cordl_internal_get__movingVelocity() const;

constexpr float_t& __cordl_internal_get__movingVelocity() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__playingDetailSounds() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__playingDetailSounds() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>* const& __cordl_internal_get__playingTreeSounds() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*& __cordl_internal_get__playingTreeSounds() ;

constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& __cordl_internal_get__propLayer() const;

constexpr ::UnityW<::GlobalNamespace::AudioAsset>& __cordl_internal_get__propLayer() ;

constexpr float_t const& __cordl_internal_get__rightDepth() const;

constexpr float_t& __cordl_internal_get__rightDepth() ;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters> const& __cordl_internal_get__rightHandFilter() const;

constexpr ::UnityW<::GlobalNamespace::BiquadFilters>& __cordl_internal_get__rightHandFilter() ;

constexpr float_t const& __cordl_internal_get__rightHandVelocity() const;

constexpr float_t& __cordl_internal_get__rightHandVelocity() ;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper* const& __cordl_internal_get__sampleHeightHelper() const;

constexpr ::WaveHarmonic::Crest::SampleCollisionHelper*& __cordl_internal_get__sampleHeightHelper() ;

constexpr bool const& __cordl_internal_get__sitting() const;

constexpr bool& __cordl_internal_get__sitting() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioLayerContainer>,::GlobalNamespace::AudioEvent*>* const& __cordl_internal_get__slidingEventLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioLayerContainer>,::GlobalNamespace::AudioEvent*>*& __cordl_internal_get__slidingEventLookup() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__sphereCastResults() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__sphereCastResults() ;

constexpr int32_t const& __cordl_internal_get__squeakySandSwitch() const;

constexpr int32_t& __cordl_internal_get__squeakySandSwitch() ;

constexpr bool const& __cordl_internal_get__standing() const;

constexpr bool& __cordl_internal_get__standing() ;

constexpr bool const& __cordl_internal_get__swimLeftHandUp() const;

constexpr bool& __cordl_internal_get__swimLeftHandUp() ;

constexpr bool const& __cordl_internal_get__swimRightHandUp() const;

constexpr bool& __cordl_internal_get__swimRightHandUp() ;

constexpr ::GlobalNamespace::VolatilityEvaluator* const& __cordl_internal_get__volatilityEvaluator() const;

constexpr ::GlobalNamespace::VolatilityEvaluator*& __cordl_internal_get__volatilityEvaluator() ;

constexpr bool const& __cordl_internal_get__wasWalkingOrRunning() const;

constexpr bool& __cordl_internal_get__wasWalkingOrRunning() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__waterBobASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__waterBobASC() ;

constexpr float_t const& __cordl_internal_get__waterDepth() const;

constexpr float_t& __cordl_internal_get__waterDepth() ;

constexpr float_t const& __cordl_internal_get__waterIntensity() const;

constexpr float_t& __cordl_internal_get__waterIntensity() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__waterJumpEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__waterJumpEvent() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__waterLandEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__waterLandEvent() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__waterMoveCenterASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__waterMoveCenterASC() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__waterMoveLeftASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__waterMoveLeftASC() ;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController> const& __cordl_internal_get__waterMoveRightASC() const;

constexpr ::UnityW<::GlobalNamespace::AudioSourceController>& __cordl_internal_get__waterMoveRightASC() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__waterRunEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__waterRunEvent() ;

constexpr ::GlobalNamespace::AudioEvent* const& __cordl_internal_get__waterWalkEvent() const;

constexpr ::GlobalNamespace::AudioEvent*& __cordl_internal_get__waterWalkEvent() ;

constexpr void __cordl_internal_set_AssetReferences(::UnityW<::GlobalNamespace::FootstepAudioReferences>  value) ;

constexpr void __cordl_internal_set_Bob(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_Bum(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_LeftFoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_LeftHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_OnJump(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnLand(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnSit(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnStand(::System::Action*  value) ;

constexpr void __cordl_internal_set_PlayerCharacter(::UnityW<::GlobalNamespace::PlayerCharacter>  value) ;

constexpr void __cordl_internal_set_RightFoot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_RightHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_Root(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_RootWorldPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__1stProportion(float_t  value) ;

constexpr void __cordl_internal_set__1stSlidingEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__1stSlidingVolume(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__1stSoundSet(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  value) ;

constexpr void __cordl_internal_set__2ndProportion(float_t  value) ;

constexpr void __cordl_internal_set__2ndSlidingEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__2ndSlidingVolume(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__2ndSoundSet(::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  value) ;

constexpr void __cordl_internal_set__LastHitCollider_k__BackingField(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set__WaterFoleyFadeVol_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__WaterFootstepFadeVol_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__WaterIntensityVol_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__WaterMoveLeftVol_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__WaterMoveRightVol_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__WaterVolRealtime_k__BackingField(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__cachedSpeed(float_t  value) ;

constexpr void __cordl_internal_set__cachedStreamTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__cachedTerrain(::UnityW<::UnityEngine::Terrain>  value) ;

constexpr void __cordl_internal_set__capsuleCastResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set__crouchVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__currentDetailObj(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__currentDetailSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set__currentLogObj(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__currentTreeObj(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__currentTreeSound(::UnityW<::GlobalNamespace::AudioRandomContainer>  value) ;

constexpr void __cordl_internal_set__debugLogReady(bool  value) ;

constexpr void __cordl_internal_set__grounded(bool  value) ;

constexpr void __cordl_internal_set__guiDebugLog(::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*  value) ;

constexpr void __cordl_internal_set__guiDebugTextStyle(::UnityEngine::GUIStyle*  value) ;

constexpr void __cordl_internal_set__hitSphereCount(int32_t  value) ;

constexpr void __cordl_internal_set__inAir(bool  value) ;

constexpr void __cordl_internal_set__inMicroSplatWater(bool  value) ;

constexpr void __cordl_internal_set__indoornessVol(::GlobalNamespace::AudioVolume*  value) ;

constexpr void __cordl_internal_set__landing(bool  value) ;

constexpr void __cordl_internal_set__lastHitMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

constexpr void __cordl_internal_set__lastLeftMax(float_t  value) ;

constexpr void __cordl_internal_set__lastRightMax(float_t  value) ;

constexpr void __cordl_internal_set__lastRootWorldPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lastRustlePlayTime(float_t  value) ;

constexpr void __cordl_internal_set__lastSlideLandTime(float_t  value) ;

constexpr void __cordl_internal_set__lastSlideStartTime(float_t  value) ;

constexpr void __cordl_internal_set__lastSlideStopTime(float_t  value) ;

constexpr void __cordl_internal_set__leftDepth(float_t  value) ;

constexpr void __cordl_internal_set__leftHandFilter(::UnityW<::GlobalNamespace::BiquadFilters>  value) ;

constexpr void __cordl_internal_set__leftHandVelocity(float_t  value) ;

constexpr void __cordl_internal_set__movingVelocity(float_t  value) ;

constexpr void __cordl_internal_set__playingDetailSounds(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__playingTreeSounds(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  value) ;

constexpr void __cordl_internal_set__propLayer(::UnityW<::GlobalNamespace::AudioAsset>  value) ;

constexpr void __cordl_internal_set__rightDepth(float_t  value) ;

constexpr void __cordl_internal_set__rightHandFilter(::UnityW<::GlobalNamespace::BiquadFilters>  value) ;

constexpr void __cordl_internal_set__rightHandVelocity(float_t  value) ;

constexpr void __cordl_internal_set__sampleHeightHelper(::WaveHarmonic::Crest::SampleCollisionHelper*  value) ;

constexpr void __cordl_internal_set__sitting(bool  value) ;

constexpr void __cordl_internal_set__slidingEventLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioLayerContainer>,::GlobalNamespace::AudioEvent*>*  value) ;

constexpr void __cordl_internal_set__sphereCastResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set__squeakySandSwitch(int32_t  value) ;

constexpr void __cordl_internal_set__standing(bool  value) ;

constexpr void __cordl_internal_set__swimLeftHandUp(bool  value) ;

constexpr void __cordl_internal_set__swimRightHandUp(bool  value) ;

constexpr void __cordl_internal_set__volatilityEvaluator(::GlobalNamespace::VolatilityEvaluator*  value) ;

constexpr void __cordl_internal_set__wasWalkingOrRunning(bool  value) ;

constexpr void __cordl_internal_set__waterBobASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__waterDepth(float_t  value) ;

constexpr void __cordl_internal_set__waterIntensity(float_t  value) ;

constexpr void __cordl_internal_set__waterJumpEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__waterLandEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__waterMoveCenterASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__waterMoveLeftASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__waterMoveRightASC(::UnityW<::GlobalNamespace::AudioSourceController>  value) ;

constexpr void __cordl_internal_set__waterRunEvent(::GlobalNamespace::AudioEvent*  value) ;

constexpr void __cordl_internal_set__waterWalkEvent(::GlobalNamespace::AudioEvent*  value) ;

/// @brief Method .ctor, addr 0x1803452b0, size 0x410, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnJump, addr 0x1803456c0, size 0x90, virtual false, abstract: false, final false
inline void add_OnJump(::System::Action*  value) ;

/// @brief Method add_OnLand, addr 0x180345750, size 0x90, virtual false, abstract: false, final false
inline void add_OnLand(::System::Action*  value) ;

/// @brief Method add_OnSit, addr 0x1803457e0, size 0x90, virtual false, abstract: false, final false
inline void add_OnSit(::System::Action*  value) ;

/// @brief Method add_OnStand, addr 0x180345870, size 0x90, virtual false, abstract: false, final false
inline void add_OnStand(::System::Action*  value) ;

static inline ::GlobalNamespace::WaterDepthSampleData_GetDepthMode getStaticF__DepthMode_k__BackingField() ;

static inline float_t getStaticF__LocalPlayerHeightOffTerrainAvg_k__BackingField() ;

static inline float_t getStaticF__LocalPlayerHeightOffTerrain_k__BackingField() ;

static inline ::UnityW<::UnityEngine::Texture2D> getStaticF__LocalStreamTexture_k__BackingField() ;

static inline ::UnityW<::UnityEngine::Terrain> getStaticF__LocalTerrain_k__BackingField() ;

static inline float_t getStaticF__RealTreeIntensity_k__BackingField() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>* getStaticF__WindyPositions_k__BackingField() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>* getStaticF__WindyTimeScalerLookup_k__BackingField() ;

static inline ::GlobalNamespace::VegetationAudioCullingContainer* getStaticF__detailAudioCullingContainer() ;

static inline ::GlobalNamespace::VegetationAudioCullingContainer* getStaticF__logAudioCullingContainer() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>* getStaticF__remotePlayers() ;

static inline ::GlobalNamespace::VegetationAudioCullingContainer* getStaticF__treeAudioCullingContainer() ;

static inline int32_t getStaticF_s_detailDensityCount() ;

static inline int32_t getStaticF_s_treeDensityCount() ;

static inline int32_t getStaticF_s_treeDensityCountLong() ;

/// @brief Method get_CanSlide, addr 0x180345900, size 0x20, virtual false, abstract: false, final false
inline bool get_CanSlide() ;

/// @brief Method get_DepthMode, addr 0x180345920, size 0x40, virtual false, abstract: false, final false
static inline ::GlobalNamespace::WaterDepthSampleData_GetDepthMode get_DepthMode() ;

/// @brief Method get_GUIDebugMode, addr 0x18032d450, size 0x70, virtual false, abstract: false, final false
inline bool get_GUIDebugMode() ;

/// @brief Method get_Identifier, addr 0x180345960, size 0x10, virtual true, abstract: false, final true
inline ::StringW get_Identifier() ;

/// @brief Method get_InWater, addr 0x180345970, size 0x20, virtual false, abstract: false, final false
inline bool get_InWater() ;

/// @brief Method get_IndoornessVol, addr 0x1803459d0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_IndoornessVol() ;

/// @brief Method get_IndoornessVolStruct, addr 0x180345990, size 0x40, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolumeStruct get_IndoornessVolStruct() ;

/// @brief Method get_Initialized, addr 0x1802dc4d0, size 0x10, virtual true, abstract: false, final true
inline bool get_Initialized() ;

/// @brief Method get_IsGrounded, addr 0x1803115f0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsGrounded() ;

/// @brief Method get_LastHitCollider, addr 0x1803459e0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> get_LastHitCollider() ;

/// @brief Method get_LocalPlayerHeightOffTerrain, addr 0x180345a30, size 0x40, virtual false, abstract: false, final false
static inline float_t get_LocalPlayerHeightOffTerrain() ;

/// @brief Method get_LocalPlayerHeightOffTerrainAvg, addr 0x1803459f0, size 0x40, virtual false, abstract: false, final false
static inline float_t get_LocalPlayerHeightOffTerrainAvg() ;

/// @brief Method get_LocalStreamTexture, addr 0x180345a70, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_LocalStreamTexture() ;

/// @brief Method get_LocalTerrain, addr 0x180345ab0, size 0x40, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Terrain> get_LocalTerrain() ;

/// @brief Method get_RealTreeIntensity, addr 0x180345af0, size 0x40, virtual false, abstract: false, final false
static inline float_t get_RealTreeIntensity() ;

/// @brief Method get_TreeDensityCountLong, addr 0x180345b30, size 0x40, virtual false, abstract: false, final false
static inline int32_t get_TreeDensityCountLong() ;

/// @brief Method get_WaterFoleyFadeVol, addr 0x180345bb0, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_WaterFoleyFadeVol() ;

/// @brief Method get_WaterFoleyFadeVolStruct, addr 0x180345b70, size 0x40, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolumeStruct get_WaterFoleyFadeVolStruct() ;

/// @brief Method get_WaterFootstepFadeVol, addr 0x180345c00, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_WaterFootstepFadeVol() ;

/// @brief Method get_WaterFootstepFadeVolStruct, addr 0x180345bc0, size 0x40, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolumeStruct get_WaterFootstepFadeVolStruct() ;

/// @brief Method get_WaterIntensityVol, addr 0x180345c10, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_WaterIntensityVol() ;

/// @brief Method get_WaterMoveLeftVol, addr 0x180345c20, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_WaterMoveLeftVol() ;

/// @brief Method get_WaterMoveRightVol, addr 0x180345c30, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_WaterMoveRightVol() ;

/// @brief Method get_WaterVolRealtime, addr 0x180345c40, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolume* get_WaterVolRealtime() ;

/// @brief Method get_WaterVolStruct, addr 0x180345c50, size 0x40, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioVolumeStruct get_WaterVolStruct() ;

/// @brief Method get_WindyPositions, addr 0x180316340, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>* get_WindyPositions() ;

/// @brief Method get_WindyTimeScalerLookup, addr 0x180316380, size 0x40, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>* get_WindyTimeScalerLookup() ;

/// @brief Convert to "::GlobalNamespace::IAudioBehaviour"
constexpr ::GlobalNamespace::IAudioBehaviour* i___GlobalNamespace__IAudioBehaviour() noexcept;

/// @brief Convert to "::GlobalNamespace::IAudioGUI"
constexpr ::GlobalNamespace::IAudioGUI* i___GlobalNamespace__IAudioGUI() noexcept;

/// @brief Method remove_OnJump, addr 0x180345c90, size 0x90, virtual false, abstract: false, final false
inline void remove_OnJump(::System::Action*  value) ;

/// @brief Method remove_OnLand, addr 0x180345d20, size 0x90, virtual false, abstract: false, final false
inline void remove_OnLand(::System::Action*  value) ;

/// @brief Method remove_OnSit, addr 0x180345db0, size 0x90, virtual false, abstract: false, final false
inline void remove_OnSit(::System::Action*  value) ;

/// @brief Method remove_OnStand, addr 0x180345e40, size 0x90, virtual false, abstract: false, final false
inline void remove_OnStand(::System::Action*  value) ;

static inline void setStaticF__DepthMode_k__BackingField(::GlobalNamespace::WaterDepthSampleData_GetDepthMode  value) ;

static inline void setStaticF__LocalPlayerHeightOffTerrainAvg_k__BackingField(float_t  value) ;

static inline void setStaticF__LocalPlayerHeightOffTerrain_k__BackingField(float_t  value) ;

static inline void setStaticF__LocalStreamTexture_k__BackingField(::UnityW<::UnityEngine::Texture2D>  value) ;

static inline void setStaticF__LocalTerrain_k__BackingField(::UnityW<::UnityEngine::Terrain>  value) ;

static inline void setStaticF__RealTreeIntensity_k__BackingField(float_t  value) ;

static inline void setStaticF__WindyPositions_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>*  value) ;

static inline void setStaticF__WindyTimeScalerLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*  value) ;

static inline void setStaticF__detailAudioCullingContainer(::GlobalNamespace::VegetationAudioCullingContainer*  value) ;

static inline void setStaticF__logAudioCullingContainer(::GlobalNamespace::VegetationAudioCullingContainer*  value) ;

static inline void setStaticF__remotePlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::FootstepSound>>*  value) ;

static inline void setStaticF__treeAudioCullingContainer(::GlobalNamespace::VegetationAudioCullingContainer*  value) ;

static inline void setStaticF_s_detailDensityCount(int32_t  value) ;

static inline void setStaticF_s_treeDensityCount(int32_t  value) ;

static inline void setStaticF_s_treeDensityCountLong(int32_t  value) ;

/// @brief Method set_DepthMode, addr 0x180345ed0, size 0x50, virtual false, abstract: false, final false
static inline void set_DepthMode(::GlobalNamespace::WaterDepthSampleData_GetDepthMode  value) ;

/// @brief Method set_GUIDebugMode, addr 0x18032d4d0, size 0xb0, virtual false, abstract: false, final false
inline void set_GUIDebugMode(bool  value) ;

/// @brief Method set_LastHitCollider, addr 0x180345f20, size 0x20, virtual false, abstract: false, final false
inline void set_LastHitCollider(::UnityEngine::Collider*  value) ;

/// @brief Method set_LocalPlayerHeightOffTerrain, addr 0x180345fa0, size 0x60, virtual false, abstract: false, final false
static inline void set_LocalPlayerHeightOffTerrain(float_t  value) ;

/// @brief Method set_LocalPlayerHeightOffTerrainAvg, addr 0x180345f40, size 0x60, virtual false, abstract: false, final false
static inline void set_LocalPlayerHeightOffTerrainAvg(float_t  value) ;

/// @brief Method set_LocalStreamTexture, addr 0x180346000, size 0x60, virtual false, abstract: false, final false
static inline void set_LocalStreamTexture(::UnityEngine::Texture2D*  value) ;

/// @brief Method set_LocalTerrain, addr 0x180346060, size 0x60, virtual false, abstract: false, final false
static inline void set_LocalTerrain(::UnityEngine::Terrain*  value) ;

/// @brief Method set_RealTreeIntensity, addr 0x1803460c0, size 0x60, virtual false, abstract: false, final false
static inline void set_RealTreeIntensity(float_t  value) ;

/// @brief Method set_WaterFoleyFadeVol, addr 0x180346120, size 0x20, virtual false, abstract: false, final false
inline void set_WaterFoleyFadeVol(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method set_WaterFootstepFadeVol, addr 0x180346140, size 0x20, virtual false, abstract: false, final false
inline void set_WaterFootstepFadeVol(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method set_WaterIntensityVol, addr 0x180346160, size 0x20, virtual false, abstract: false, final false
inline void set_WaterIntensityVol(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method set_WaterMoveLeftVol, addr 0x180346180, size 0x20, virtual false, abstract: false, final false
inline void set_WaterMoveLeftVol(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method set_WaterMoveRightVol, addr 0x1803461a0, size 0x20, virtual false, abstract: false, final false
inline void set_WaterMoveRightVol(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method set_WaterVolRealtime, addr 0x1803461c0, size 0x20, virtual false, abstract: false, final false
inline void set_WaterVolRealtime(::GlobalNamespace::AudioVolume*  value) ;

/// @brief Method set_WindyPositions, addr 0x1803461e0, size 0x60, virtual false, abstract: false, final false
static inline void set_WindyPositions(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Vector3,float_t>>*>*  value) ;

/// @brief Method set_WindyTimeScalerLookup, addr 0x180346240, size 0x1a0, virtual false, abstract: false, final false
static inline void set_WindyTimeScalerLookup(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::FootstepAudioReferences_VegetationType,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FootstepSound() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FootstepSound", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FootstepSound(FootstepSound && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FootstepSound", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FootstepSound(FootstepSound const& ) = delete;

/// @brief Field DENSITY_DETECTION_DIST offset 0xffffffff size 0x4
static constexpr float_t  DENSITY_DETECTION_DIST{static_cast<float_t>(10.0f)};

/// @brief Field DENSITY_DETECTION_DIST_LONG offset 0xffffffff size 0x4
static constexpr float_t  DENSITY_DETECTION_DIST_LONG{static_cast<float_t>(30.0f)};

/// @brief Field DETAIL_DETECTION_DIST offset 0xffffffff size 0x4
static constexpr float_t  DETAIL_DETECTION_DIST{static_cast<float_t>(0.5f)};

/// @brief Field DETAIL_MAX_DELAY offset 0xffffffff size 0x4
static constexpr float_t  DETAIL_MAX_DELAY{static_cast<float_t>(0.3f)};

/// @brief Field FOOTSTEP_HEIGHT_DIFF_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  FOOTSTEP_HEIGHT_DIFF_THRESHOLD{static_cast<float_t>(0.5f)};

/// @brief Field FOOTSTEP_HEIGHT_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  FOOTSTEP_HEIGHT_THRESHOLD{static_cast<float_t>(0.3f)};

/// @brief Field PROP_LAYER_SCALER offset 0xffffffff size 0x4
static constexpr float_t  PROP_LAYER_SCALER{static_cast<float_t>(0.4f)};

/// @brief Field RUSTLE_COOLDOWN offset 0xffffffff size 0x4
static constexpr float_t  RUSTLE_COOLDOWN{static_cast<float_t>(0.1f)};

/// @brief Field SLIDE_LAND_COOLDOWN offset 0xffffffff size 0x4
static constexpr float_t  SLIDE_LAND_COOLDOWN{static_cast<float_t>(1.5f)};

/// @brief Field SLIDE_LAND_MIN_DELAY offset 0xffffffff size 0x4
static constexpr float_t  SLIDE_LAND_MIN_DELAY{static_cast<float_t>(0.5f)};

/// @brief Field SLIDE_LAND_VEL_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  SLIDE_LAND_VEL_THRESHOLD{static_cast<float_t>(-30.0f)};

/// @brief Field SLIDE_STAND_VEL_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  SLIDE_STAND_VEL_THRESHOLD{static_cast<float_t>(0.01f)};

/// @brief Field SLIDE_STOP_LAND_WINDOW offset 0xffffffff size 0x4
static constexpr float_t  SLIDE_STOP_LAND_WINDOW{static_cast<float_t>(1.0f)};

/// @brief Field STOP_SPEED_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  STOP_SPEED_THRESHOLD{static_cast<float_t>(1.5f)};

/// @brief Field TREE_DETECTION_DIST offset 0xffffffff size 0x4
static constexpr float_t  TREE_DETECTION_DIST{static_cast<float_t>(0.6f)};

/// @brief Field WATER_DETECTION_THRESHOLD offset 0xffffffff size 0x4
static constexpr float_t  WATER_DETECTION_THRESHOLD{static_cast<float_t>(-0.01f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4840};

/// @brief Field PlayerCharacter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerCharacter>  ___PlayerCharacter;

/// @brief Field Root, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___Root;

/// @brief Field Bum, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___Bum;

/// @brief Field LeftFoot, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___LeftFoot;

/// @brief Field RightFoot, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___RightFoot;

/// @brief Field Bob, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___Bob;

/// @brief Field LeftHand, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___LeftHand;

/// @brief Field RightHand, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___RightHand;

/// @brief Field AssetReferences, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::FootstepAudioReferences>  ___AssetReferences;

/// @brief Field RootWorldPos, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___RootWorldPos;

/// @brief Field _lastRootWorldPos, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastRootWorldPos;

/// @brief Field _lastLeftMax, offset: 0x80, size: 0x4, def value: None
 float_t  ____lastLeftMax;

/// @brief Field _lastRightMax, offset: 0x84, size: 0x4, def value: None
 float_t  ____lastRightMax;

/// @brief Field _inAir, offset: 0x88, size: 0x1, def value: None
 bool  ____inAir;

/// @brief Field _landing, offset: 0x89, size: 0x1, def value: None
 bool  ____landing;

/// @brief Field _sitting, offset: 0x8a, size: 0x1, def value: None
 bool  ____sitting;

/// @brief Field _standing, offset: 0x8b, size: 0x1, def value: None
 bool  ____standing;

/// @brief Field _grounded, offset: 0x8c, size: 0x1, def value: None
 bool  ____grounded;

/// @brief Field _wasWalkingOrRunning, offset: 0x8d, size: 0x1, def value: None
 bool  ____wasWalkingOrRunning;

/// @brief Field OnJump, offset: 0x90, size: 0x8, def value: None
 ::System::Action*  ___OnJump;

/// @brief Field OnSit, offset: 0x98, size: 0x8, def value: None
 ::System::Action*  ___OnSit;

/// @brief Field OnStand, offset: 0xa0, size: 0x8, def value: None
 ::System::Action*  ___OnStand;

/// @brief Field OnLand, offset: 0xa8, size: 0x8, def value: None
 ::System::Action*  ___OnLand;

/// @brief Field _cachedSpeed, offset: 0xb0, size: 0x4, def value: None
 float_t  ____cachedSpeed;

/// @brief Field _movingVelocity, offset: 0xb4, size: 0x4, def value: None
 float_t  ____movingVelocity;

/// @brief Field _1stSoundSet, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  ____1stSoundSet;

/// @brief Field _2ndSoundSet, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::FootstepAudioReferences_FootstepSoundData*  ____2ndSoundSet;

/// @brief Field _1stProportion, offset: 0xc8, size: 0x4, def value: None
 float_t  ____1stProportion;

/// @brief Field _2ndProportion, offset: 0xcc, size: 0x4, def value: None
 float_t  ____2ndProportion;

/// @brief Field _squeakySandSwitch, offset: 0xd0, size: 0x4, def value: None
 int32_t  ____squeakySandSwitch;

/// @brief Field _propLayer, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioAsset>  ____propLayer;

/// @brief Field _indoornessVol, offset: 0xe0, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____indoornessVol;

/// @brief Field _crouchVol, offset: 0xe8, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____crouchVol;

/// @brief Field _currentDetailSound, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ____currentDetailSound;

/// @brief Field _currentTreeSound, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioRandomContainer>  ____currentTreeSound;

/// @brief Field _lastRustlePlayTime, offset: 0x100, size: 0x4, def value: None
 float_t  ____lastRustlePlayTime;

/// @brief Field _slidingEventLookup, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::AudioLayerContainer>,::GlobalNamespace::AudioEvent*>*  ____slidingEventLookup;

/// @brief Field _1stSlidingEvent, offset: 0x110, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____1stSlidingEvent;

/// @brief Field _2ndSlidingEvent, offset: 0x118, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____2ndSlidingEvent;

/// @brief Field _1stSlidingVolume, offset: 0x120, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____1stSlidingVolume;

/// @brief Field _2ndSlidingVolume, offset: 0x128, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____2ndSlidingVolume;

/// @brief Field _lastSlideLandTime, offset: 0x130, size: 0x4, def value: None
 float_t  ____lastSlideLandTime;

/// @brief Field _lastSlideStopTime, offset: 0x134, size: 0x4, def value: None
 float_t  ____lastSlideStopTime;

/// @brief Field _lastSlideStartTime, offset: 0x138, size: 0x4, def value: None
 float_t  ____lastSlideStartTime;

/// @brief Field _lastHitMaterial, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ____lastHitMaterial;

/// @brief Field _sphereCastResults, offset: 0x148, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____sphereCastResults;

/// @brief Field _capsuleCastResults, offset: 0x150, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____capsuleCastResults;

/// @brief Field _hitSphereCount, offset: 0x158, size: 0x4, def value: None
 int32_t  ____hitSphereCount;

/// @brief Field <LastHitCollider>k__BackingField, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____LastHitCollider_k__BackingField;

/// @brief Field _sampleHeightHelper, offset: 0x168, size: 0x8, def value: None
 ::WaveHarmonic::Crest::SampleCollisionHelper*  ____sampleHeightHelper;

/// @brief Field _volatilityEvaluator, offset: 0x170, size: 0x8, def value: None
 ::GlobalNamespace::VolatilityEvaluator*  ____volatilityEvaluator;

/// @brief Field _waterDepth, offset: 0x178, size: 0x4, def value: None
 float_t  ____waterDepth;

/// @brief Field _waterIntensity, offset: 0x17c, size: 0x4, def value: None
 float_t  ____waterIntensity;

/// @brief Field _inMicroSplatWater, offset: 0x180, size: 0x1, def value: None
 bool  ____inMicroSplatWater;

/// @brief Field <WaterVolRealtime>k__BackingField, offset: 0x188, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____WaterVolRealtime_k__BackingField;

/// @brief Field <WaterIntensityVol>k__BackingField, offset: 0x190, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____WaterIntensityVol_k__BackingField;

/// @brief Field <WaterFootstepFadeVol>k__BackingField, offset: 0x198, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____WaterFootstepFadeVol_k__BackingField;

/// @brief Field <WaterFoleyFadeVol>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____WaterFoleyFadeVol_k__BackingField;

/// @brief Field <WaterMoveLeftVol>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____WaterMoveLeftVol_k__BackingField;

/// @brief Field <WaterMoveRightVol>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
 ::GlobalNamespace::AudioVolume*  ____WaterMoveRightVol_k__BackingField;

/// @brief Field _waterWalkEvent, offset: 0x1b8, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____waterWalkEvent;

/// @brief Field _waterRunEvent, offset: 0x1c0, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____waterRunEvent;

/// @brief Field _waterJumpEvent, offset: 0x1c8, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____waterJumpEvent;

/// @brief Field _waterLandEvent, offset: 0x1d0, size: 0x8, def value: None
 ::GlobalNamespace::AudioEvent*  ____waterLandEvent;

/// @brief Field _waterBobASC, offset: 0x1d8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____waterBobASC;

/// @brief Field _waterMoveLeftASC, offset: 0x1e0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____waterMoveLeftASC;

/// @brief Field _waterMoveRightASC, offset: 0x1e8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____waterMoveRightASC;

/// @brief Field _waterMoveCenterASC, offset: 0x1f0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioSourceController>  ____waterMoveCenterASC;

/// @brief Field _swimLeftHandUp, offset: 0x1f8, size: 0x1, def value: None
 bool  ____swimLeftHandUp;

/// @brief Field _swimRightHandUp, offset: 0x1f9, size: 0x1, def value: None
 bool  ____swimRightHandUp;

/// @brief Field _leftHandVelocity, offset: 0x1fc, size: 0x4, def value: None
 float_t  ____leftHandVelocity;

/// @brief Field _rightHandVelocity, offset: 0x200, size: 0x4, def value: None
 float_t  ____rightHandVelocity;

/// @brief Field _leftDepth, offset: 0x204, size: 0x4, def value: None
 float_t  ____leftDepth;

/// @brief Field _rightDepth, offset: 0x208, size: 0x4, def value: None
 float_t  ____rightDepth;

/// @brief Field _leftHandFilter, offset: 0x210, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BiquadFilters>  ____leftHandFilter;

/// @brief Field _rightHandFilter, offset: 0x218, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BiquadFilters>  ____rightHandFilter;

/// @brief Field _cachedTerrain, offset: 0x220, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Terrain>  ____cachedTerrain;

/// @brief Field _cachedStreamTexture, offset: 0x228, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____cachedStreamTexture;

/// @brief Field _playingDetailSounds, offset: 0x230, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ____playingDetailSounds;

/// @brief Field _playingTreeSounds, offset: 0x238, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioSourceController>>*  ____playingTreeSounds;

/// @brief Field _guiDebugLog, offset: 0x240, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::GUIContent*>*  ____guiDebugLog;

/// @brief Field _guiDebugTextStyle, offset: 0x248, size: 0x8, def value: None
 ::UnityEngine::GUIStyle*  ____guiDebugTextStyle;

/// @brief Field _currentDetailObj, offset: 0x250, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____currentDetailObj;

/// @brief Field _currentTreeObj, offset: 0x258, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____currentTreeObj;

/// @brief Field _currentLogObj, offset: 0x260, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____currentLogObj;

/// @brief Field _debugLogReady, offset: 0x268, size: 0x1, def value: None
 bool  ____debugLogReady;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FootstepSound, ___PlayerCharacter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ___Root) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ___Bum) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ___LeftFoot) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ___RightFoot) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ___Bob) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ___LeftHand) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ___RightHand) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ___AssetReferences) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ___RootWorldPos) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____lastRootWorldPos) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____lastLeftMax) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____lastRightMax) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____inAir) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____landing) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____sitting) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____standing) == 0x8b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____grounded) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____wasWalkingOrRunning) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ___OnJump) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ___OnSit) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ___OnStand) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ___OnLand) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____cachedSpeed) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____movingVelocity) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____1stSoundSet) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____2ndSoundSet) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____1stProportion) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____2ndProportion) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____squeakySandSwitch) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____propLayer) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____indoornessVol) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____crouchVol) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____currentDetailSound) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____currentTreeSound) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____lastRustlePlayTime) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____slidingEventLookup) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____1stSlidingEvent) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____2ndSlidingEvent) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____1stSlidingVolume) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____2ndSlidingVolume) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____lastSlideLandTime) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____lastSlideStopTime) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____lastSlideStartTime) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____lastHitMaterial) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____sphereCastResults) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____capsuleCastResults) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____hitSphereCount) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____LastHitCollider_k__BackingField) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____sampleHeightHelper) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____volatilityEvaluator) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____waterDepth) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____waterIntensity) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____inMicroSplatWater) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____WaterVolRealtime_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____WaterIntensityVol_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____WaterFootstepFadeVol_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____WaterFoleyFadeVol_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____WaterMoveLeftVol_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____WaterMoveRightVol_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____waterWalkEvent) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____waterRunEvent) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____waterJumpEvent) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____waterLandEvent) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____waterBobASC) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____waterMoveLeftASC) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____waterMoveRightASC) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____waterMoveCenterASC) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____swimLeftHandUp) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____swimRightHandUp) == 0x1f9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____leftHandVelocity) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____rightHandVelocity) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____leftDepth) == 0x204, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____rightDepth) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____leftHandFilter) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____rightHandFilter) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____cachedTerrain) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____cachedStreamTexture) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____playingDetailSounds) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____playingTreeSounds) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____guiDebugLog) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____guiDebugTextStyle) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____currentDetailObj) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____currentTreeObj) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____currentLogObj) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FootstepSound, ____debugLogReady) == 0x268, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FootstepSound) == 0x270, "Size mismatch!");

} // namespace end def GlobalNamespace
