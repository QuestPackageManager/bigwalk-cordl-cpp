#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioDynamicReverb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FixedSizeFloatQueue_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastCommand_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioDynamicReverb)
namespace GlobalNamespace {
struct AudioDynamicReverb_SideRaycastResult;
}
namespace GlobalNamespace {
class AudioMaterialConfig;
}
namespace GlobalNamespace {
class AudioPortal;
}
namespace GlobalNamespace {
class DynamicReverbConfig;
}
namespace GlobalNamespace {
class FixedSizeFloatQueue;
}
namespace GlobalNamespace {
class ReverbZone;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class PhysicsMaterial;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioDynamicReverb;
}
namespace GlobalNamespace {
struct AudioDynamicReverb_SideRaycastResult;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioDynamicReverb*);
MARK_VAL_T(::GlobalNamespace::AudioDynamicReverb_SideRaycastResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioDynamicReverb*, "", "AudioDynamicReverb");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioDynamicReverb_SideRaycastResult, "", "AudioDynamicReverb/SideRaycastResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioDynamicReverb/SideRaycastResult
struct CORDL_TYPE AudioDynamicReverb_SideRaycastResult {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AudioDynamicReverb_SideRaycastResult() ;

// Ctor Parameters [CppParam { name: "HasHit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "HasMaterial", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "IsNotPassThrough", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "ClosestDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Occlusion", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ClosestCollider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: None }, CppParam { name: "ClosestMaterial", ty: "::UnityW<::UnityEngine::PhysicsMaterial>", modifiers: "", def_value: None }]
constexpr AudioDynamicReverb_SideRaycastResult(bool  HasHit, bool  HasMaterial, bool  IsNotPassThrough, float_t  ClosestDistance, float_t  Occlusion, ::UnityW<::UnityEngine::Collider>  ClosestCollider, ::UnityW<::UnityEngine::PhysicsMaterial>  ClosestMaterial) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17514};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field HasHit, offset: 0x0, size: 0x1, def value: None
 bool  HasHit;

/// @brief Field HasMaterial, offset: 0x1, size: 0x1, def value: None
 bool  HasMaterial;

/// @brief Field IsNotPassThrough, offset: 0x2, size: 0x1, def value: None
 bool  IsNotPassThrough;

/// @brief Field ClosestDistance, offset: 0x4, size: 0x4, def value: None
 float_t  ClosestDistance;

/// @brief Field Occlusion, offset: 0x8, size: 0x4, def value: None
 float_t  Occlusion;

/// @brief Field ClosestCollider, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ClosestCollider;

/// @brief Field ClosestMaterial, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ClosestMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb_SideRaycastResult, HasHit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb_SideRaycastResult, HasMaterial) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb_SideRaycastResult, IsNotPassThrough) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb_SideRaycastResult, ClosestDistance) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb_SideRaycastResult, Occlusion) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb_SideRaycastResult, ClosestCollider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb_SideRaycastResult, ClosestMaterial) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioDynamicReverb_SideRaycastResult) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies FixedSizeFloatQueue, Unity.Collections.NativeArray`1<T>, Unity.Jobs.JobHandle, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.RaycastCommand, UnityEngine.RaycastHit, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioDynamicReverb
class CORDL_TYPE AudioDynamicReverb : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SideRaycastResult = ::GlobalNamespace::AudioDynamicReverb_SideRaycastResult;

/// @brief Field Bypass, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_Bypass, put=__cordl_internal_set_Bypass)) bool  Bypass;

 __declspec(property(get=get_DSP_DecayHFRatio, put=set_DSP_DecayHFRatio)) float_t  DSP_DecayHFRatio;

 __declspec(property(get=get_DSP_DecayTime, put=set_DSP_DecayTime)) float_t  DSP_DecayTime;

 __declspec(property(get=get_DSP_Density, put=set_DSP_Density)) float_t  DSP_Density;

 __declspec(property(get=get_DSP_Diffusion, put=set_DSP_Diffusion)) float_t  DSP_Diffusion;

 __declspec(property(get=get_DSP_DryLevel, put=set_DSP_DryLevel)) float_t  DSP_DryLevel;

 __declspec(property(get=get_DSP_HFReference, put=set_DSP_HFReference)) float_t  DSP_HFReference;

 __declspec(property(get=get_DSP_LFReference, put=set_DSP_LFReference)) float_t  DSP_LFReference;

 __declspec(property(get=get_DSP_ReflectDelay, put=set_DSP_ReflectDelay)) float_t  DSP_ReflectDelay;

 __declspec(property(get=get_DSP_Reflections, put=set_DSP_Reflections)) float_t  DSP_Reflections;

 __declspec(property(get=get_DSP_Reverb, put=set_DSP_Reverb)) float_t  DSP_Reverb;

 __declspec(property(get=get_DSP_ReverbDelay, put=set_DSP_ReverbDelay)) float_t  DSP_ReverbDelay;

 __declspec(property(get=get_DSP_Room, put=set_DSP_Room)) float_t  DSP_Room;

 __declspec(property(get=get_DSP_RoomHF, put=set_DSP_RoomHF)) float_t  DSP_RoomHF;

 __declspec(property(get=get_DSP_RoomLF, put=set_DSP_RoomLF)) float_t  DSP_RoomLF;

 __declspec(property(get=get_Diffusion, put=set_Diffusion)) float_t  Diffusion;

 __declspec(property(get=get_DirectionFills, put=set_DirectionFills)) ::ArrayW<float_t>  DirectionFills;

 __declspec(property(get=get_DirectionOffsets, put=set_DirectionOffsets)) ::ArrayW<::UnityEngine::Vector2>  DirectionOffsets;

 __declspec(property(get=get_DirectionOffsetsSmoothed, put=set_DirectionOffsetsSmoothed)) ::ArrayW<::UnityEngine::Vector2>  DirectionOffsetsSmoothed;

 __declspec(property(get=get_EchoRatioFlat, put=set_EchoRatioFlat)) ::ArrayW<float_t>  EchoRatioFlat;

 __declspec(property(get=get_Initialized)) bool  Initialized;

 __declspec(property(get=get_Mixer, put=set_Mixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  Mixer;

 __declspec(property(get=get_Outdoorness, put=set_Outdoorness)) float_t  Outdoorness;

 __declspec(property(get=get_PortalFills, put=set_PortalFills)) ::ArrayW<float_t>  PortalFills;

 __declspec(property(get=get_Portalness, put=set_Portalness)) float_t  Portalness;

 __declspec(property(get=get_RandomPoints, put=set_RandomPoints)) ::ArrayW<::UnityEngine::Vector3>  RandomPoints;

 __declspec(property(get=get_RandomPointsEcho, put=set_RandomPointsEcho)) ::ArrayW<::UnityEngine::Vector3>  RandomPointsEcho;

 __declspec(property(get=get_RandomPointsUpwards, put=set_RandomPointsUpwards)) ::ArrayW<::UnityEngine::Vector3>  RandomPointsUpwards;

 __declspec(property(get=get_ReverbTime, put=set_ReverbTime)) float_t  ReverbTime;

 __declspec(property(get=get_RoomSize, put=set_RoomSize)) float_t  RoomSize;

 __declspec(property(get=get_SideFillsAvg, put=set_SideFillsAvg)) float_t  SideFillsAvg;

 __declspec(property(get=get_SideFillsMultiplied, put=set_SideFillsMultiplied)) float_t  SideFillsMultiplied;

 __declspec(property(get=get_SideToTopFillRatio, put=set_SideToTopFillRatio)) float_t  SideToTopFillRatio;

/// @brief Field UsePortals, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_UsePortals, put=__cordl_internal_set_UsePortals)) bool  UsePortals;

/// @brief Field <DSP_DecayHFRatio>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__DSP_DecayHFRatio_k__BackingField, put=__cordl_internal_set__DSP_DecayHFRatio_k__BackingField)) float_t  _DSP_DecayHFRatio_k__BackingField;

/// @brief Field <DSP_DecayTime>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__DSP_DecayTime_k__BackingField, put=__cordl_internal_set__DSP_DecayTime_k__BackingField)) float_t  _DSP_DecayTime_k__BackingField;

/// @brief Field <DSP_Density>k__BackingField, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__DSP_Density_k__BackingField, put=__cordl_internal_set__DSP_Density_k__BackingField)) float_t  _DSP_Density_k__BackingField;

/// @brief Field <DSP_Diffusion>k__BackingField, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__DSP_Diffusion_k__BackingField, put=__cordl_internal_set__DSP_Diffusion_k__BackingField)) float_t  _DSP_Diffusion_k__BackingField;

/// @brief Field <DSP_DryLevel>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__DSP_DryLevel_k__BackingField, put=__cordl_internal_set__DSP_DryLevel_k__BackingField)) float_t  _DSP_DryLevel_k__BackingField;

/// @brief Field <DSP_HFReference>k__BackingField, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__DSP_HFReference_k__BackingField, put=__cordl_internal_set__DSP_HFReference_k__BackingField)) float_t  _DSP_HFReference_k__BackingField;

/// @brief Field <DSP_LFReference>k__BackingField, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__DSP_LFReference_k__BackingField, put=__cordl_internal_set__DSP_LFReference_k__BackingField)) float_t  _DSP_LFReference_k__BackingField;

/// @brief Field <DSP_ReflectDelay>k__BackingField, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__DSP_ReflectDelay_k__BackingField, put=__cordl_internal_set__DSP_ReflectDelay_k__BackingField)) float_t  _DSP_ReflectDelay_k__BackingField;

/// @brief Field <DSP_Reflections>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__DSP_Reflections_k__BackingField, put=__cordl_internal_set__DSP_Reflections_k__BackingField)) float_t  _DSP_Reflections_k__BackingField;

/// @brief Field <DSP_ReverbDelay>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__DSP_ReverbDelay_k__BackingField, put=__cordl_internal_set__DSP_ReverbDelay_k__BackingField)) float_t  _DSP_ReverbDelay_k__BackingField;

/// @brief Field <DSP_Reverb>k__BackingField, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__DSP_Reverb_k__BackingField, put=__cordl_internal_set__DSP_Reverb_k__BackingField)) float_t  _DSP_Reverb_k__BackingField;

/// @brief Field <DSP_RoomHF>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__DSP_RoomHF_k__BackingField, put=__cordl_internal_set__DSP_RoomHF_k__BackingField)) float_t  _DSP_RoomHF_k__BackingField;

/// @brief Field <DSP_RoomLF>k__BackingField, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__DSP_RoomLF_k__BackingField, put=__cordl_internal_set__DSP_RoomLF_k__BackingField)) float_t  _DSP_RoomLF_k__BackingField;

/// @brief Field <DSP_Room>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__DSP_Room_k__BackingField, put=__cordl_internal_set__DSP_Room_k__BackingField)) float_t  _DSP_Room_k__BackingField;

/// @brief Field <Diffusion>k__BackingField, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Diffusion_k__BackingField, put=__cordl_internal_set__Diffusion_k__BackingField)) float_t  _Diffusion_k__BackingField;

/// @brief Field <DirectionFills>k__BackingField, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__DirectionFills_k__BackingField, put=__cordl_internal_set__DirectionFills_k__BackingField)) ::ArrayW<float_t>  _DirectionFills_k__BackingField;

/// @brief Field <DirectionOffsetsSmoothed>k__BackingField, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__DirectionOffsetsSmoothed_k__BackingField, put=__cordl_internal_set__DirectionOffsetsSmoothed_k__BackingField)) ::ArrayW<::UnityEngine::Vector2>  _DirectionOffsetsSmoothed_k__BackingField;

/// @brief Field <DirectionOffsets>k__BackingField, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__DirectionOffsets_k__BackingField, put=__cordl_internal_set__DirectionOffsets_k__BackingField)) ::ArrayW<::UnityEngine::Vector2>  _DirectionOffsets_k__BackingField;

/// @brief Field <EchoRatioFlat>k__BackingField, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__EchoRatioFlat_k__BackingField, put=__cordl_internal_set__EchoRatioFlat_k__BackingField)) ::ArrayW<float_t>  _EchoRatioFlat_k__BackingField;

/// @brief Field <Mixer>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Mixer_k__BackingField, put=__cordl_internal_set__Mixer_k__BackingField)) ::UnityW<::UnityEngine::Audio::AudioMixer>  _Mixer_k__BackingField;

/// @brief Field <Outdoorness>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__Outdoorness_k__BackingField, put=__cordl_internal_set__Outdoorness_k__BackingField)) float_t  _Outdoorness_k__BackingField;

/// @brief Field <PortalFills>k__BackingField, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__PortalFills_k__BackingField, put=__cordl_internal_set__PortalFills_k__BackingField)) ::ArrayW<float_t>  _PortalFills_k__BackingField;

/// @brief Field <Portalness>k__BackingField, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get__Portalness_k__BackingField, put=__cordl_internal_set__Portalness_k__BackingField)) float_t  _Portalness_k__BackingField;

/// @brief Field <RandomPointsEcho>k__BackingField, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__RandomPointsEcho_k__BackingField, put=__cordl_internal_set__RandomPointsEcho_k__BackingField)) ::ArrayW<::UnityEngine::Vector3>  _RandomPointsEcho_k__BackingField;

/// @brief Field <RandomPointsUpwards>k__BackingField, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__RandomPointsUpwards_k__BackingField, put=__cordl_internal_set__RandomPointsUpwards_k__BackingField)) ::ArrayW<::UnityEngine::Vector3>  _RandomPointsUpwards_k__BackingField;

/// @brief Field <RandomPoints>k__BackingField, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__RandomPoints_k__BackingField, put=__cordl_internal_set__RandomPoints_k__BackingField)) ::ArrayW<::UnityEngine::Vector3>  _RandomPoints_k__BackingField;

/// @brief Field <ReverbTime>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__ReverbTime_k__BackingField, put=__cordl_internal_set__ReverbTime_k__BackingField)) float_t  _ReverbTime_k__BackingField;

/// @brief Field <RoomSize>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__RoomSize_k__BackingField, put=__cordl_internal_set__RoomSize_k__BackingField)) float_t  _RoomSize_k__BackingField;

/// @brief Field <SideFillsAvg>k__BackingField, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get__SideFillsAvg_k__BackingField, put=__cordl_internal_set__SideFillsAvg_k__BackingField)) float_t  _SideFillsAvg_k__BackingField;

/// @brief Field <SideFillsMultiplied>k__BackingField, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get__SideFillsMultiplied_k__BackingField, put=__cordl_internal_set__SideFillsMultiplied_k__BackingField)) float_t  _SideFillsMultiplied_k__BackingField;

/// @brief Field <SideToTopFillRatio>k__BackingField, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get__SideToTopFillRatio_k__BackingField, put=__cordl_internal_set__SideToTopFillRatio_k__BackingField)) float_t  _SideToTopFillRatio_k__BackingField;

/// @brief Field _activePortals, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__activePortals, put=__cordl_internal_set__activePortals)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPortal>>*  _activePortals;

/// @brief Field _actualRange, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__actualRange, put=__cordl_internal_set__actualRange)) float_t  _actualRange;

/// @brief Field _bucketCenters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__bucketCenters, put=setStaticF__bucketCenters)) ::ArrayW<::UnityEngine::Vector2>  _bucketCenters;

/// @brief Field _collideHits, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__collideHits, put=__cordl_internal_set__collideHits)) ::GlobalNamespace::FixedSizeFloatQueue*  _collideHits;

/// @brief Field _collideLength, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__collideLength, put=__cordl_internal_set__collideLength)) ::GlobalNamespace::FixedSizeFloatQueue*  _collideLength;

/// @brief Field _collideReflection, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__collideReflection, put=__cordl_internal_set__collideReflection)) ::GlobalNamespace::FixedSizeFloatQueue*  _collideReflection;

/// @brief Field _config, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::UnityW<::GlobalNamespace::DynamicReverbConfig>  _config;

/// @brief Field _currentRaysAmount, offset 0x1f0, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentRaysAmount, put=__cordl_internal_set__currentRaysAmount)) int32_t  _currentRaysAmount;

/// @brief Field _detectionAngleHigh, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get__detectionAngleHigh, put=__cordl_internal_set__detectionAngleHigh)) float_t  _detectionAngleHigh;

/// @brief Field _detectionAngleLow, offset 0x1f4, size 0x4 
 __declspec(property(get=__cordl_internal_get__detectionAngleLow, put=__cordl_internal_set__detectionAngleLow)) float_t  _detectionAngleLow;

/// @brief Field _detectionRange, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__detectionRange, put=__cordl_internal_set__detectionRange)) float_t  _detectionRange;

/// @brief Field _diffusionOverride, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__diffusionOverride, put=__cordl_internal_set__diffusionOverride)) float_t  _diffusionOverride;

/// @brief Field _directionBuckets, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__directionBuckets, put=__cordl_internal_set__directionBuckets)) ::ArrayW<::GlobalNamespace::FixedSizeFloatQueue*>  _directionBuckets;

/// @brief Field _echoCounterFlat, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__echoCounterFlat, put=__cordl_internal_set__echoCounterFlat)) ::ArrayW<int32_t>  _echoCounterFlat;

/// @brief Field _echoIteration, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get__echoIteration, put=__cordl_internal_set__echoIteration)) int32_t  _echoIteration;

/// @brief Field _echoRatioFlat, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__echoRatioFlat, put=__cordl_internal_set__echoRatioFlat)) ::ArrayW<float_t>  _echoRatioFlat;

/// @brief Field _inReverbZone, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__inReverbZone, put=__cordl_internal_set__inReverbZone)) bool  _inReverbZone;

/// @brief Field _initialDiffusion, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__initialDiffusion, put=__cordl_internal_set__initialDiffusion)) float_t  _initialDiffusion;

/// @brief Field _layers, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__layers, put=__cordl_internal_set__layers)) ::UnityEngine::LayerMask  _layers;

/// @brief Field _materialConfig, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialConfig, put=__cordl_internal_set__materialConfig)) ::UnityW<::GlobalNamespace::AudioMaterialConfig>  _materialConfig;

/// @brief Field _outdoornessCurve, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__outdoornessCurve, put=__cordl_internal_set__outdoornessCurve)) ::UnityEngine::AnimationCurve*  _outdoornessCurve;

/// @brief Field _outdoornessOverride, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__outdoornessOverride, put=__cordl_internal_set__outdoornessOverride)) float_t  _outdoornessOverride;

/// @brief Field _raycastCommands, offset 0x158, size 0x10 
 __declspec(property(get=__cordl_internal_get__raycastCommands, put=__cordl_internal_set__raycastCommands)) ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  _raycastCommands;

/// @brief Field _raycastCommandsEcho, offset 0x1b8, size 0x10 
 __declspec(property(get=__cordl_internal_get__raycastCommandsEcho, put=__cordl_internal_set__raycastCommandsEcho)) ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  _raycastCommandsEcho;

/// @brief Field _raycastCommandsUpwards, offset 0x188, size 0x10 
 __declspec(property(get=__cordl_internal_get__raycastCommandsUpwards, put=__cordl_internal_set__raycastCommandsUpwards)) ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  _raycastCommandsUpwards;

/// @brief Field _raycastJobHandle, offset 0x178, size 0x10 
 __declspec(property(get=__cordl_internal_get__raycastJobHandle, put=__cordl_internal_set__raycastJobHandle)) ::Unity::Jobs::JobHandle  _raycastJobHandle;

/// @brief Field _raycastJobHandleEcho, offset 0x1d8, size 0x10 
 __declspec(property(get=__cordl_internal_get__raycastJobHandleEcho, put=__cordl_internal_set__raycastJobHandleEcho)) ::Unity::Jobs::JobHandle  _raycastJobHandleEcho;

/// @brief Field _raycastJobHandleUpwards, offset 0x1a8, size 0x10 
 __declspec(property(get=__cordl_internal_get__raycastJobHandleUpwards, put=__cordl_internal_set__raycastJobHandleUpwards)) ::Unity::Jobs::JobHandle  _raycastJobHandleUpwards;

/// @brief Field _results, offset 0x168, size 0x10 
 __declspec(property(get=__cordl_internal_get__results, put=__cordl_internal_set__results)) ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  _results;

/// @brief Field _resultsEcho, offset 0x1c8, size 0x10 
 __declspec(property(get=__cordl_internal_get__resultsEcho, put=__cordl_internal_set__resultsEcho)) ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  _resultsEcho;

/// @brief Field _resultsUpwards, offset 0x198, size 0x10 
 __declspec(property(get=__cordl_internal_get__resultsUpwards, put=__cordl_internal_set__resultsUpwards)) ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  _resultsUpwards;

/// @brief Field _reverbTimeOverride, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__reverbTimeOverride, put=__cordl_internal_set__reverbTimeOverride)) float_t  _reverbTimeOverride;

/// @brief Field _reverbZones, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__reverbZones, put=__cordl_internal_set__reverbZones)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ReverbZone>>*  _reverbZones;

/// @brief Field _roomSizeCurve, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__roomSizeCurve, put=__cordl_internal_set__roomSizeCurve)) ::UnityEngine::AnimationCurve*  _roomSizeCurve;

/// @brief Field _roomSizeOverride, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__roomSizeOverride, put=__cordl_internal_set__roomSizeOverride)) float_t  _roomSizeOverride;

/// @brief Field _size, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__size, put=__cordl_internal_set__size)) int32_t  _size;

/// @brief Method CalculateDirectionShifts, addr 0x180471060, size 0x380, virtual false, abstract: false, final false
inline void CalculateDirectionShifts() ;

/// @brief Method CalculateEcho, addr 0x1804713e0, size 0x60, virtual false, abstract: false, final false
inline void CalculateEcho() ;

/// @brief Method CalculatePortals, addr 0x180471440, size 0x440, virtual false, abstract: false, final false
inline void CalculatePortals() ;

/// @brief Method CalculateReverb, addr 0x180471b50, size 0xf30, virtual false, abstract: false, final false
inline void CalculateReverb() ;

/// @brief Method CalculateReverbOverride, addr 0x180471880, size 0x2d0, virtual false, abstract: false, final false
inline void CalculateReverbOverride() ;

/// @brief Method CalculateShiftedDirection, addr 0x180472a80, size 0x2d0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 CalculateShiftedDirection(::UnityEngine::Vector2  currentDir2D, ::ArrayW<float_t>  directionFills) ;

/// @brief Method CreateReverbArrays, addr 0x180472d50, size 0x190, virtual false, abstract: false, final false
inline void CreateReverbArrays(int32_t  raysAmount) ;

/// @brief Method EnterReverbZone, addr 0x180472ee0, size 0xb0, virtual false, abstract: false, final false
inline void EnterReverbZone(::GlobalNamespace::ReverbZone*  reverbZone) ;

/// @brief Method ExitReverbZone, addr 0x180472f90, size 0x80, virtual false, abstract: false, final false
inline void ExitReverbZone(::GlobalNamespace::ReverbZone*  reverbZone) ;

/// @brief Method GetOcclusionForMaterial, addr 0x180473010, size 0x70, virtual false, abstract: false, final false
inline float_t GetOcclusionForMaterial(::UnityEngine::PhysicsMaterial*  hitMat, float_t  currentOcclusion) ;

/// @brief Method GetSideRaycastResult, addr 0x180473080, size 0x1f0, virtual false, abstract: false, final false
inline ::GlobalNamespace::AudioDynamicReverb_SideRaycastResult GetSideRaycastResult(int32_t  startIndex, ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::PhysicsMaterial>>*  passThroughMaterials) ;

/// @brief Method Initialize, addr 0x180473270, size 0x370, virtual false, abstract: false, final false
inline void Initialize(::GlobalNamespace::DynamicReverbConfig*  config) ;

static inline ::GlobalNamespace::AudioDynamicReverb* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1804735e0, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RaycastEcho, addr 0x180473670, size 0x400, virtual false, abstract: false, final false
inline void RaycastEcho() ;

/// @brief Method RaycastsReverb, addr 0x180473a70, size 0x4d0, virtual false, abstract: false, final false
inline void RaycastsReverb() ;

/// @brief Method RegisterPortal, addr 0x180473f40, size 0x70, virtual false, abstract: false, final false
inline void RegisterPortal(::GlobalNamespace::AudioPortal*  portal) ;

/// @brief Method SetQualityLevel, addr 0x180473fb0, size 0xe0, virtual false, abstract: false, final false
inline void SetQualityLevel(int32_t  level) ;

/// @brief Method UnregisterPortal, addr 0x180474090, size 0x30, virtual false, abstract: false, final false
inline void UnregisterPortal(::GlobalNamespace::AudioPortal*  portal) ;

/// @brief Method UpdateEcho, addr 0x1804740c0, size 0x3f0, virtual false, abstract: false, final false
inline void UpdateEcho() ;

/// @brief Method UpdateReverb, addr 0x1804744b0, size 0x480, virtual false, abstract: false, final false
inline void UpdateReverb() ;

constexpr bool const& __cordl_internal_get_Bypass() const;

constexpr bool& __cordl_internal_get_Bypass() ;

constexpr bool const& __cordl_internal_get_UsePortals() const;

constexpr bool& __cordl_internal_get_UsePortals() ;

constexpr float_t const& __cordl_internal_get__DSP_DecayHFRatio_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DSP_DecayHFRatio_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DSP_DecayTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DSP_DecayTime_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DSP_Density_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DSP_Density_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DSP_Diffusion_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DSP_Diffusion_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DSP_DryLevel_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DSP_DryLevel_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DSP_HFReference_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DSP_HFReference_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DSP_LFReference_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DSP_LFReference_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DSP_ReflectDelay_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DSP_ReflectDelay_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DSP_Reflections_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DSP_Reflections_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DSP_ReverbDelay_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DSP_ReverbDelay_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DSP_Reverb_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DSP_Reverb_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DSP_RoomHF_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DSP_RoomHF_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DSP_RoomLF_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DSP_RoomLF_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DSP_Room_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DSP_Room_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Diffusion_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Diffusion_k__BackingField() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__DirectionFills_k__BackingField() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__DirectionFills_k__BackingField() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get__DirectionOffsetsSmoothed_k__BackingField() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get__DirectionOffsetsSmoothed_k__BackingField() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get__DirectionOffsets_k__BackingField() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get__DirectionOffsets_k__BackingField() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__EchoRatioFlat_k__BackingField() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__EchoRatioFlat_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get__Mixer_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get__Mixer_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Outdoorness_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Outdoorness_k__BackingField() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__PortalFills_k__BackingField() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__PortalFills_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Portalness_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Portalness_k__BackingField() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__RandomPointsEcho_k__BackingField() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__RandomPointsEcho_k__BackingField() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__RandomPointsUpwards_k__BackingField() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__RandomPointsUpwards_k__BackingField() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__RandomPoints_k__BackingField() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__RandomPoints_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ReverbTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ReverbTime_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__RoomSize_k__BackingField() const;

constexpr float_t& __cordl_internal_get__RoomSize_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__SideFillsAvg_k__BackingField() const;

constexpr float_t& __cordl_internal_get__SideFillsAvg_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__SideFillsMultiplied_k__BackingField() const;

constexpr float_t& __cordl_internal_get__SideFillsMultiplied_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__SideToTopFillRatio_k__BackingField() const;

constexpr float_t& __cordl_internal_get__SideToTopFillRatio_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPortal>>* const& __cordl_internal_get__activePortals() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPortal>>*& __cordl_internal_get__activePortals() ;

constexpr float_t const& __cordl_internal_get__actualRange() const;

constexpr float_t& __cordl_internal_get__actualRange() ;

constexpr ::GlobalNamespace::FixedSizeFloatQueue* const& __cordl_internal_get__collideHits() const;

constexpr ::GlobalNamespace::FixedSizeFloatQueue*& __cordl_internal_get__collideHits() ;

constexpr ::GlobalNamespace::FixedSizeFloatQueue* const& __cordl_internal_get__collideLength() const;

constexpr ::GlobalNamespace::FixedSizeFloatQueue*& __cordl_internal_get__collideLength() ;

constexpr ::GlobalNamespace::FixedSizeFloatQueue* const& __cordl_internal_get__collideReflection() const;

constexpr ::GlobalNamespace::FixedSizeFloatQueue*& __cordl_internal_get__collideReflection() ;

constexpr ::UnityW<::GlobalNamespace::DynamicReverbConfig> const& __cordl_internal_get__config() const;

constexpr ::UnityW<::GlobalNamespace::DynamicReverbConfig>& __cordl_internal_get__config() ;

constexpr int32_t const& __cordl_internal_get__currentRaysAmount() const;

constexpr int32_t& __cordl_internal_get__currentRaysAmount() ;

constexpr float_t const& __cordl_internal_get__detectionAngleHigh() const;

constexpr float_t& __cordl_internal_get__detectionAngleHigh() ;

constexpr float_t const& __cordl_internal_get__detectionAngleLow() const;

constexpr float_t& __cordl_internal_get__detectionAngleLow() ;

constexpr float_t const& __cordl_internal_get__detectionRange() const;

constexpr float_t& __cordl_internal_get__detectionRange() ;

constexpr float_t const& __cordl_internal_get__diffusionOverride() const;

constexpr float_t& __cordl_internal_get__diffusionOverride() ;

constexpr ::ArrayW<::GlobalNamespace::FixedSizeFloatQueue*> const& __cordl_internal_get__directionBuckets() const;

constexpr ::ArrayW<::GlobalNamespace::FixedSizeFloatQueue*>& __cordl_internal_get__directionBuckets() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__echoCounterFlat() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__echoCounterFlat() ;

constexpr int32_t const& __cordl_internal_get__echoIteration() const;

constexpr int32_t& __cordl_internal_get__echoIteration() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__echoRatioFlat() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__echoRatioFlat() ;

constexpr bool const& __cordl_internal_get__inReverbZone() const;

constexpr bool& __cordl_internal_get__inReverbZone() ;

constexpr float_t const& __cordl_internal_get__initialDiffusion() const;

constexpr float_t& __cordl_internal_get__initialDiffusion() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__layers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__layers() ;

constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig> const& __cordl_internal_get__materialConfig() const;

constexpr ::UnityW<::GlobalNamespace::AudioMaterialConfig>& __cordl_internal_get__materialConfig() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__outdoornessCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__outdoornessCurve() ;

constexpr float_t const& __cordl_internal_get__outdoornessOverride() const;

constexpr float_t& __cordl_internal_get__outdoornessOverride() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> const& __cordl_internal_get__raycastCommands() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>& __cordl_internal_get__raycastCommands() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> const& __cordl_internal_get__raycastCommandsEcho() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>& __cordl_internal_get__raycastCommandsEcho() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand> const& __cordl_internal_get__raycastCommandsUpwards() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>& __cordl_internal_get__raycastCommandsUpwards() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get__raycastJobHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get__raycastJobHandle() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get__raycastJobHandleEcho() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get__raycastJobHandleEcho() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get__raycastJobHandleUpwards() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get__raycastJobHandleUpwards() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& __cordl_internal_get__results() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& __cordl_internal_get__results() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& __cordl_internal_get__resultsEcho() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& __cordl_internal_get__resultsEcho() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& __cordl_internal_get__resultsUpwards() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& __cordl_internal_get__resultsUpwards() ;

constexpr float_t const& __cordl_internal_get__reverbTimeOverride() const;

constexpr float_t& __cordl_internal_get__reverbTimeOverride() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ReverbZone>>* const& __cordl_internal_get__reverbZones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ReverbZone>>*& __cordl_internal_get__reverbZones() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__roomSizeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__roomSizeCurve() ;

constexpr float_t const& __cordl_internal_get__roomSizeOverride() const;

constexpr float_t& __cordl_internal_get__roomSizeOverride() ;

constexpr int32_t const& __cordl_internal_get__size() const;

constexpr int32_t& __cordl_internal_get__size() ;

constexpr void __cordl_internal_set_Bypass(bool  value) ;

constexpr void __cordl_internal_set_UsePortals(bool  value) ;

constexpr void __cordl_internal_set__DSP_DecayHFRatio_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DSP_DecayTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DSP_Density_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DSP_Diffusion_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DSP_DryLevel_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DSP_HFReference_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DSP_LFReference_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DSP_ReflectDelay_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DSP_Reflections_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DSP_ReverbDelay_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DSP_Reverb_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DSP_RoomHF_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DSP_RoomLF_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DSP_Room_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Diffusion_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__DirectionFills_k__BackingField(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__DirectionOffsetsSmoothed_k__BackingField(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set__DirectionOffsets_k__BackingField(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set__EchoRatioFlat_k__BackingField(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__Mixer_k__BackingField(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set__Outdoorness_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__PortalFills_k__BackingField(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__Portalness_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__RandomPointsEcho_k__BackingField(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__RandomPointsUpwards_k__BackingField(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__RandomPoints_k__BackingField(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__ReverbTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__RoomSize_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__SideFillsAvg_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__SideFillsMultiplied_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__SideToTopFillRatio_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__activePortals(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPortal>>*  value) ;

constexpr void __cordl_internal_set__actualRange(float_t  value) ;

constexpr void __cordl_internal_set__collideHits(::GlobalNamespace::FixedSizeFloatQueue*  value) ;

constexpr void __cordl_internal_set__collideLength(::GlobalNamespace::FixedSizeFloatQueue*  value) ;

constexpr void __cordl_internal_set__collideReflection(::GlobalNamespace::FixedSizeFloatQueue*  value) ;

constexpr void __cordl_internal_set__config(::UnityW<::GlobalNamespace::DynamicReverbConfig>  value) ;

constexpr void __cordl_internal_set__currentRaysAmount(int32_t  value) ;

constexpr void __cordl_internal_set__detectionAngleHigh(float_t  value) ;

constexpr void __cordl_internal_set__detectionAngleLow(float_t  value) ;

constexpr void __cordl_internal_set__detectionRange(float_t  value) ;

constexpr void __cordl_internal_set__diffusionOverride(float_t  value) ;

constexpr void __cordl_internal_set__directionBuckets(::ArrayW<::GlobalNamespace::FixedSizeFloatQueue*>  value) ;

constexpr void __cordl_internal_set__echoCounterFlat(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__echoIteration(int32_t  value) ;

constexpr void __cordl_internal_set__echoRatioFlat(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__inReverbZone(bool  value) ;

constexpr void __cordl_internal_set__initialDiffusion(float_t  value) ;

constexpr void __cordl_internal_set__layers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__materialConfig(::UnityW<::GlobalNamespace::AudioMaterialConfig>  value) ;

constexpr void __cordl_internal_set__outdoornessCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__outdoornessOverride(float_t  value) ;

constexpr void __cordl_internal_set__raycastCommands(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  value) ;

constexpr void __cordl_internal_set__raycastCommandsEcho(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  value) ;

constexpr void __cordl_internal_set__raycastCommandsUpwards(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  value) ;

constexpr void __cordl_internal_set__raycastJobHandle(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set__raycastJobHandleEcho(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set__raycastJobHandleUpwards(::Unity::Jobs::JobHandle  value) ;

constexpr void __cordl_internal_set__results(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__resultsEcho(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__resultsUpwards(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set__reverbTimeOverride(float_t  value) ;

constexpr void __cordl_internal_set__reverbZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ReverbZone>>*  value) ;

constexpr void __cordl_internal_set__roomSizeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__roomSizeOverride(float_t  value) ;

constexpr void __cordl_internal_set__size(int32_t  value) ;

/// @brief Method .ctor, addr 0x180474a00, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Vector2> getStaticF__bucketCenters() ;

/// @brief Method get_DSP_DecayHFRatio, addr 0x180315260, size 0x10, virtual false, abstract: false, final false
inline float_t get_DSP_DecayHFRatio() ;

/// @brief Method get_DSP_DecayTime, addr 0x180356140, size 0x10, virtual false, abstract: false, final false
inline float_t get_DSP_DecayTime() ;

/// @brief Method get_DSP_Density, addr 0x180474bc0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DSP_Density() ;

/// @brief Method get_DSP_Diffusion, addr 0x1802e58b0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DSP_Diffusion() ;

/// @brief Method get_DSP_DryLevel, addr 0x1802e2b90, size 0x10, virtual false, abstract: false, final false
inline float_t get_DSP_DryLevel() ;

/// @brief Method get_DSP_HFReference, addr 0x18034f9d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DSP_HFReference() ;

/// @brief Method get_DSP_LFReference, addr 0x180474bd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DSP_LFReference() ;

/// @brief Method get_DSP_ReflectDelay, addr 0x18046fb00, size 0x10, virtual false, abstract: false, final false
inline float_t get_DSP_ReflectDelay() ;

/// @brief Method get_DSP_Reflections, addr 0x18046faf0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DSP_Reflections() ;

/// @brief Method get_DSP_Reverb, addr 0x18046fae0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DSP_Reverb() ;

/// @brief Method get_DSP_ReverbDelay, addr 0x18046fad0, size 0x10, virtual false, abstract: false, final false
inline float_t get_DSP_ReverbDelay() ;

/// @brief Method get_DSP_Room, addr 0x1802e2d80, size 0x10, virtual false, abstract: false, final false
inline float_t get_DSP_Room() ;

/// @brief Method get_DSP_RoomHF, addr 0x1802f8050, size 0x10, virtual false, abstract: false, final false
inline float_t get_DSP_RoomHF() ;

/// @brief Method get_DSP_RoomLF, addr 0x1802f8070, size 0x10, virtual false, abstract: false, final false
inline float_t get_DSP_RoomLF() ;

/// @brief Method get_Diffusion, addr 0x1802e2d90, size 0x10, virtual false, abstract: false, final false
inline float_t get_Diffusion() ;

/// @brief Method get_DirectionFills, addr 0x1803459d0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<float_t> get_DirectionFills() ;

/// @brief Method get_DirectionOffsets, addr 0x180337100, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> get_DirectionOffsets() ;

/// @brief Method get_DirectionOffsetsSmoothed, addr 0x1803370a0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector2> get_DirectionOffsetsSmoothed() ;

/// @brief Method get_EchoRatioFlat, addr 0x1803370b0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<float_t> get_EchoRatioFlat() ;

/// @brief Method get_Initialized, addr 0x180474be0, size 0x10, virtual false, abstract: false, final false
inline bool get_Initialized() ;

/// @brief Method get_Mixer, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Audio::AudioMixer> get_Mixer() ;

/// @brief Method get_Outdoorness, addr 0x1802e2da0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Outdoorness() ;

/// @brief Method get_PortalFills, addr 0x180474bf0, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<float_t> get_PortalFills() ;

/// @brief Method get_Portalness, addr 0x180474c00, size 0x10, virtual false, abstract: false, final false
inline float_t get_Portalness() ;

/// @brief Method get_RandomPoints, addr 0x180474c30, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> get_RandomPoints() ;

/// @brief Method get_RandomPointsEcho, addr 0x180474c10, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> get_RandomPointsEcho() ;

/// @brief Method get_RandomPointsUpwards, addr 0x180474c20, size 0x10, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> get_RandomPointsUpwards() ;

/// @brief Method get_ReverbTime, addr 0x1802f7fd0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ReverbTime() ;

/// @brief Method get_RoomSize, addr 0x1803f68d0, size 0x10, virtual false, abstract: false, final false
inline float_t get_RoomSize() ;

/// @brief Method get_SideFillsAvg, addr 0x180330be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_SideFillsAvg() ;

/// @brief Method get_SideFillsMultiplied, addr 0x180474c40, size 0x10, virtual false, abstract: false, final false
inline float_t get_SideFillsMultiplied() ;

/// @brief Method get_SideToTopFillRatio, addr 0x180474c50, size 0x10, virtual false, abstract: false, final false
inline float_t get_SideToTopFillRatio() ;

static inline void setStaticF__bucketCenters(::ArrayW<::UnityEngine::Vector2>  value) ;

/// @brief Method set_DSP_DecayHFRatio, addr 0x1803dccc0, size 0x10, virtual false, abstract: false, final false
inline void set_DSP_DecayHFRatio(float_t  value) ;

/// @brief Method set_DSP_DecayTime, addr 0x1803561c0, size 0x10, virtual false, abstract: false, final false
inline void set_DSP_DecayTime(float_t  value) ;

/// @brief Method set_DSP_Density, addr 0x180474c60, size 0x10, virtual false, abstract: false, final false
inline void set_DSP_Density(float_t  value) ;

/// @brief Method set_DSP_Diffusion, addr 0x180474c70, size 0x10, virtual false, abstract: false, final false
inline void set_DSP_Diffusion(float_t  value) ;

/// @brief Method set_DSP_DryLevel, addr 0x1802e2f60, size 0x10, virtual false, abstract: false, final false
inline void set_DSP_DryLevel(float_t  value) ;

/// @brief Method set_DSP_HFReference, addr 0x180474c80, size 0x10, virtual false, abstract: false, final false
inline void set_DSP_HFReference(float_t  value) ;

/// @brief Method set_DSP_LFReference, addr 0x180474c90, size 0x10, virtual false, abstract: false, final false
inline void set_DSP_LFReference(float_t  value) ;

/// @brief Method set_DSP_ReflectDelay, addr 0x18046fb50, size 0x10, virtual false, abstract: false, final false
inline void set_DSP_ReflectDelay(float_t  value) ;

/// @brief Method set_DSP_Reflections, addr 0x18046fb40, size 0x10, virtual false, abstract: false, final false
inline void set_DSP_Reflections(float_t  value) ;

/// @brief Method set_DSP_Reverb, addr 0x18046fb20, size 0x10, virtual false, abstract: false, final false
inline void set_DSP_Reverb(float_t  value) ;

/// @brief Method set_DSP_ReverbDelay, addr 0x18046fb10, size 0x10, virtual false, abstract: false, final false
inline void set_DSP_ReverbDelay(float_t  value) ;

/// @brief Method set_DSP_Room, addr 0x180307250, size 0x10, virtual false, abstract: false, final false
inline void set_DSP_Room(float_t  value) ;

/// @brief Method set_DSP_RoomHF, addr 0x18046fb70, size 0x10, virtual false, abstract: false, final false
inline void set_DSP_RoomHF(float_t  value) ;

/// @brief Method set_DSP_RoomLF, addr 0x18046fb60, size 0x10, virtual false, abstract: false, final false
inline void set_DSP_RoomLF(float_t  value) ;

/// @brief Method set_Diffusion, addr 0x1802e2ff0, size 0x10, virtual false, abstract: false, final false
inline void set_Diffusion(float_t  value) ;

/// @brief Method set_DirectionFills, addr 0x180352c10, size 0x20, virtual false, abstract: false, final false
inline void set_DirectionFills(::ArrayW<float_t>  value) ;

/// @brief Method set_DirectionOffsets, addr 0x1803371f0, size 0x20, virtual false, abstract: false, final false
inline void set_DirectionOffsets(::ArrayW<::UnityEngine::Vector2>  value) ;

/// @brief Method set_DirectionOffsetsSmoothed, addr 0x180337130, size 0x20, virtual false, abstract: false, final false
inline void set_DirectionOffsetsSmoothed(::ArrayW<::UnityEngine::Vector2>  value) ;

/// @brief Method set_EchoRatioFlat, addr 0x180337150, size 0x20, virtual false, abstract: false, final false
inline void set_EchoRatioFlat(::ArrayW<float_t>  value) ;

/// @brief Method set_Mixer, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_Mixer(::UnityEngine::Audio::AudioMixer*  value) ;

/// @brief Method set_Outdoorness, addr 0x18046fb90, size 0x10, virtual false, abstract: false, final false
inline void set_Outdoorness(float_t  value) ;

/// @brief Method set_PortalFills, addr 0x180474ca0, size 0x20, virtual false, abstract: false, final false
inline void set_PortalFills(::ArrayW<float_t>  value) ;

/// @brief Method set_Portalness, addr 0x180474cc0, size 0x10, virtual false, abstract: false, final false
inline void set_Portalness(float_t  value) ;

/// @brief Method set_RandomPoints, addr 0x180474d10, size 0x20, virtual false, abstract: false, final false
inline void set_RandomPoints(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method set_RandomPointsEcho, addr 0x180474cd0, size 0x20, virtual false, abstract: false, final false
inline void set_RandomPointsEcho(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method set_RandomPointsUpwards, addr 0x180474cf0, size 0x20, virtual false, abstract: false, final false
inline void set_RandomPointsUpwards(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method set_ReverbTime, addr 0x18046fb80, size 0x10, virtual false, abstract: false, final false
inline void set_ReverbTime(float_t  value) ;

/// @brief Method set_RoomSize, addr 0x18046fb30, size 0x10, virtual false, abstract: false, final false
inline void set_RoomSize(float_t  value) ;

/// @brief Method set_SideFillsAvg, addr 0x180474d30, size 0x10, virtual false, abstract: false, final false
inline void set_SideFillsAvg(float_t  value) ;

/// @brief Method set_SideFillsMultiplied, addr 0x180474d40, size 0x10, virtual false, abstract: false, final false
inline void set_SideFillsMultiplied(float_t  value) ;

/// @brief Method set_SideToTopFillRatio, addr 0x180474d50, size 0x10, virtual false, abstract: false, final false
inline void set_SideToTopFillRatio(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioDynamicReverb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioDynamicReverb", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioDynamicReverb(AudioDynamicReverb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioDynamicReverb", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioDynamicReverb(AudioDynamicReverb const& ) = delete;

/// @brief Field DIRECTION_FILL_LIST_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  DIRECTION_FILL_LIST_LENGTH{static_cast<int32_t>(0x80)};

/// @brief Field MIN_COMMANDS_PER_JOB offset 0xffffffff size 0x4
static constexpr int32_t  MIN_COMMANDS_PER_JOB{static_cast<int32_t>(0x10)};

/// @brief Field SIDE_HIT_NUM offset 0xffffffff size 0x4
static constexpr int32_t  SIDE_HIT_NUM{static_cast<int32_t>(0x8)};

/// @brief Field UP_HIT_NUM offset 0xffffffff size 0x4
static constexpr int32_t  UP_HIT_NUM{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17515};

/// @brief Field Bypass, offset: 0x20, size: 0x1, def value: None
 bool  ___Bypass;

/// @brief Field UsePortals, offset: 0x21, size: 0x1, def value: None
 bool  ___UsePortals;

/// @brief Field _layers, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____layers;

/// @brief Field <Mixer>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ____Mixer_k__BackingField;

/// @brief Field <RoomSize>k__BackingField, offset: 0x30, size: 0x4, def value: None
 float_t  ____RoomSize_k__BackingField;

/// @brief Field <Outdoorness>k__BackingField, offset: 0x34, size: 0x4, def value: None
 float_t  ____Outdoorness_k__BackingField;

/// @brief Field <ReverbTime>k__BackingField, offset: 0x38, size: 0x4, def value: None
 float_t  ____ReverbTime_k__BackingField;

/// @brief Field <Diffusion>k__BackingField, offset: 0x3c, size: 0x4, def value: None
 float_t  ____Diffusion_k__BackingField;

/// @brief Field <DSP_DryLevel>k__BackingField, offset: 0x40, size: 0x4, def value: None
 float_t  ____DSP_DryLevel_k__BackingField;

/// @brief Field <DSP_Room>k__BackingField, offset: 0x44, size: 0x4, def value: None
 float_t  ____DSP_Room_k__BackingField;

/// @brief Field <DSP_RoomHF>k__BackingField, offset: 0x48, size: 0x4, def value: None
 float_t  ____DSP_RoomHF_k__BackingField;

/// @brief Field <DSP_RoomLF>k__BackingField, offset: 0x4c, size: 0x4, def value: None
 float_t  ____DSP_RoomLF_k__BackingField;

/// @brief Field <DSP_DecayTime>k__BackingField, offset: 0x50, size: 0x4, def value: None
 float_t  ____DSP_DecayTime_k__BackingField;

/// @brief Field <DSP_DecayHFRatio>k__BackingField, offset: 0x54, size: 0x4, def value: None
 float_t  ____DSP_DecayHFRatio_k__BackingField;

/// @brief Field <DSP_Reflections>k__BackingField, offset: 0x58, size: 0x4, def value: None
 float_t  ____DSP_Reflections_k__BackingField;

/// @brief Field <DSP_ReflectDelay>k__BackingField, offset: 0x5c, size: 0x4, def value: None
 float_t  ____DSP_ReflectDelay_k__BackingField;

/// @brief Field <DSP_Reverb>k__BackingField, offset: 0x60, size: 0x4, def value: None
 float_t  ____DSP_Reverb_k__BackingField;

/// @brief Field <DSP_ReverbDelay>k__BackingField, offset: 0x64, size: 0x4, def value: None
 float_t  ____DSP_ReverbDelay_k__BackingField;

/// @brief Field <DSP_HFReference>k__BackingField, offset: 0x68, size: 0x4, def value: None
 float_t  ____DSP_HFReference_k__BackingField;

/// @brief Field <DSP_LFReference>k__BackingField, offset: 0x6c, size: 0x4, def value: None
 float_t  ____DSP_LFReference_k__BackingField;

/// @brief Field <DSP_Diffusion>k__BackingField, offset: 0x70, size: 0x4, def value: None
 float_t  ____DSP_Diffusion_k__BackingField;

/// @brief Field <DSP_Density>k__BackingField, offset: 0x74, size: 0x4, def value: None
 float_t  ____DSP_Density_k__BackingField;

/// @brief Field _reverbTimeOverride, offset: 0x78, size: 0x4, def value: None
 float_t  ____reverbTimeOverride;

/// @brief Field _diffusionOverride, offset: 0x7c, size: 0x4, def value: None
 float_t  ____diffusionOverride;

/// @brief Field _roomSizeOverride, offset: 0x80, size: 0x4, def value: None
 float_t  ____roomSizeOverride;

/// @brief Field _outdoornessOverride, offset: 0x84, size: 0x4, def value: None
 float_t  ____outdoornessOverride;

/// @brief Field _collideHits, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::FixedSizeFloatQueue*  ____collideHits;

/// @brief Field _collideLength, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::FixedSizeFloatQueue*  ____collideLength;

/// @brief Field _collideReflection, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::FixedSizeFloatQueue*  ____collideReflection;

/// @brief Field _size, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____size;

/// @brief Field _detectionRange, offset: 0xa4, size: 0x4, def value: None
 float_t  ____detectionRange;

/// @brief Field _actualRange, offset: 0xa8, size: 0x4, def value: None
 float_t  ____actualRange;

/// @brief Field _initialDiffusion, offset: 0xac, size: 0x4, def value: None
 float_t  ____initialDiffusion;

/// @brief Field _inReverbZone, offset: 0xb0, size: 0x1, def value: None
 bool  ____inReverbZone;

/// @brief Field _reverbZones, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ReverbZone>>*  ____reverbZones;

/// @brief Field _materialConfig, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioMaterialConfig>  ____materialConfig;

/// @brief Field _roomSizeCurve, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____roomSizeCurve;

/// @brief Field _outdoornessCurve, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____outdoornessCurve;

/// @brief Field _directionBuckets, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::FixedSizeFloatQueue*>  ____directionBuckets;

/// @brief Field <DirectionFills>k__BackingField, offset: 0xe0, size: 0x8, def value: None
 ::ArrayW<float_t>  ____DirectionFills_k__BackingField;

/// @brief Field <PortalFills>k__BackingField, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<float_t>  ____PortalFills_k__BackingField;

/// @brief Field <Portalness>k__BackingField, offset: 0xf0, size: 0x4, def value: None
 float_t  ____Portalness_k__BackingField;

/// @brief Field <DirectionOffsets>k__BackingField, offset: 0xf8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ____DirectionOffsets_k__BackingField;

/// @brief Field <DirectionOffsetsSmoothed>k__BackingField, offset: 0x100, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ____DirectionOffsetsSmoothed_k__BackingField;

/// @brief Field <SideToTopFillRatio>k__BackingField, offset: 0x108, size: 0x4, def value: None
 float_t  ____SideToTopFillRatio_k__BackingField;

/// @brief Field <SideFillsAvg>k__BackingField, offset: 0x10c, size: 0x4, def value: None
 float_t  ____SideFillsAvg_k__BackingField;

/// @brief Field <SideFillsMultiplied>k__BackingField, offset: 0x110, size: 0x4, def value: None
 float_t  ____SideFillsMultiplied_k__BackingField;

/// @brief Field _activePortals, offset: 0x118, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::AudioPortal>>*  ____activePortals;

/// @brief Field _echoCounterFlat, offset: 0x120, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____echoCounterFlat;

/// @brief Field _echoRatioFlat, offset: 0x128, size: 0x8, def value: None
 ::ArrayW<float_t>  ____echoRatioFlat;

/// @brief Field <EchoRatioFlat>k__BackingField, offset: 0x130, size: 0x8, def value: None
 ::ArrayW<float_t>  ____EchoRatioFlat_k__BackingField;

/// @brief Field _echoIteration, offset: 0x138, size: 0x4, def value: None
 int32_t  ____echoIteration;

/// @brief Field <RandomPoints>k__BackingField, offset: 0x140, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____RandomPoints_k__BackingField;

/// @brief Field <RandomPointsUpwards>k__BackingField, offset: 0x148, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____RandomPointsUpwards_k__BackingField;

/// @brief Field <RandomPointsEcho>k__BackingField, offset: 0x150, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____RandomPointsEcho_k__BackingField;

/// @brief Field _raycastCommands, offset: 0x158, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  ____raycastCommands;

/// @brief Field _results, offset: 0x168, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  ____results;

/// @brief Field _raycastJobHandle, offset: 0x178, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ____raycastJobHandle;

/// @brief Field _raycastCommandsUpwards, offset: 0x188, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  ____raycastCommandsUpwards;

/// @brief Field _resultsUpwards, offset: 0x198, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  ____resultsUpwards;

/// @brief Field _raycastJobHandleUpwards, offset: 0x1a8, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ____raycastJobHandleUpwards;

/// @brief Field _raycastCommandsEcho, offset: 0x1b8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastCommand>  ____raycastCommandsEcho;

/// @brief Field _resultsEcho, offset: 0x1c8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  ____resultsEcho;

/// @brief Field _raycastJobHandleEcho, offset: 0x1d8, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ____raycastJobHandleEcho;

/// @brief Field _config, offset: 0x1e8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DynamicReverbConfig>  ____config;

/// @brief Field _currentRaysAmount, offset: 0x1f0, size: 0x4, def value: None
 int32_t  ____currentRaysAmount;

/// @brief Field _detectionAngleLow, offset: 0x1f4, size: 0x4, def value: None
 float_t  ____detectionAngleLow;

/// @brief Field _detectionAngleHigh, offset: 0x1f8, size: 0x4, def value: None
 float_t  ____detectionAngleHigh;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ___Bypass) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ___UsePortals) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____layers) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____Mixer_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____RoomSize_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____Outdoorness_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____ReverbTime_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____Diffusion_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DSP_DryLevel_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DSP_Room_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DSP_RoomHF_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DSP_RoomLF_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DSP_DecayTime_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DSP_DecayHFRatio_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DSP_Reflections_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DSP_ReflectDelay_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DSP_Reverb_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DSP_ReverbDelay_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DSP_HFReference_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DSP_LFReference_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DSP_Diffusion_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DSP_Density_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____reverbTimeOverride) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____diffusionOverride) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____roomSizeOverride) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____outdoornessOverride) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____collideHits) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____collideLength) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____collideReflection) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____size) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____detectionRange) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____actualRange) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____initialDiffusion) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____inReverbZone) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____reverbZones) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____materialConfig) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____roomSizeCurve) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____outdoornessCurve) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____directionBuckets) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DirectionFills_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____PortalFills_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____Portalness_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DirectionOffsets_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____DirectionOffsetsSmoothed_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____SideToTopFillRatio_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____SideFillsAvg_k__BackingField) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____SideFillsMultiplied_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____activePortals) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____echoCounterFlat) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____echoRatioFlat) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____EchoRatioFlat_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____echoIteration) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____RandomPoints_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____RandomPointsUpwards_k__BackingField) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____RandomPointsEcho_k__BackingField) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____raycastCommands) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____results) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____raycastJobHandle) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____raycastCommandsUpwards) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____resultsUpwards) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____raycastJobHandleUpwards) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____raycastCommandsEcho) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____resultsEcho) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____raycastJobHandleEcho) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____config) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____currentRaysAmount) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____detectionAngleLow) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioDynamicReverb, ____detectionAngleHigh) == 0x1f8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioDynamicReverb) == 0x200, "Size mismatch!");

} // namespace end def GlobalNamespace
